## Problem Statement

You are given a linked list where each element in the list is a node and have an integer data. You need to add 1 to the number formed by concatinating all the list node numbers together and return the head of the modified linked list. 

- Note: The head represents the first element of the given array.

### for better understading
- Problem link : [Add 1 to a Linked List Number](https://www.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1?page=3&category=Linked%20List&status=solved&sortBy=difficulty)

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
    Node* addOne(Node* head) {
        Node* rev = reverseList(head);
        Node* rev_head = rev;
        int carry = (rev->data+1)/10;
        rev->data = (rev->data+1)%10;
        rev = rev->next;
        int sum = 0;
        while(rev){
            int sum = rev->data+carry;
            rev->data = sum%10;
            carry = sum/10;
            rev = rev->next;
        }
        
        if(carry){
            Node* carry_node = new Node(carry);
            Node* result = reverseList(rev);
            carry_node->next = result;
            return carry_node;
        }
        return reverseList(rev_head);
    }
};
```