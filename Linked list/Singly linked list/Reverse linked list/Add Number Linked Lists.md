## Problem Statement

Given two numbers, num1, and num2, represented by linked lists. The task is to return the head of the linked list that represents the sum of these two numbers.

- Note: There can be leading zeros in the input lists, but there should not be any leading zeros in the output list.
### for better understading
- Problem link : [Add Number Linked Lists](https://www.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1?page=3&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

class Solution {
    Node* reverseList(Node* head){
        Node* pre = NULL;
        Node* curr = head;
        Node* nxt;
        while(curr){
            nxt = curr->next;
            curr->next = pre;
            pre = curr;
            curr = nxt;
        }
        return pre;
    }
  public:
    // Function to add two numbers represented by linked list.
    Node* addTwoLists(struct Node* num1, struct Node* num2) {
        while(num1->data == 0){
            num1 = num1->next;
        }
        while(num2->data == 0){
            num2 = num2->next;
        }
        Node* rev1 = reverseList(num1);
        Node* rev2 = reverseList(num2);
        Node* result = new Node(-1);
        Node* dummy = result;
        int carry = 0;
        while(rev1 || rev2){
            int sum = carry;
            if(rev1){
                sum += rev1->data;
                rev1 = rev1->next;
            }
            if(rev2){
                sum += rev2->data;
                rev2 = rev2->next;
            }
            carry = sum/10;
            sum %= 10;
            
            dummy->next = new Node(sum);
            dummy = dummy->next;
        }
        if(carry > 0){
            dummy->next = new Node(carry);
        }
        return reverseList(result->next);
    }
};
```