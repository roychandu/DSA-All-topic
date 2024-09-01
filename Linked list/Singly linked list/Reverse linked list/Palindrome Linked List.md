## Problem Statement

Given a singly linked list of integers. The task is to check if the given linked list is palindrome or not.

### for better understading
- Problem link : [Palindrome Linked List](https://www.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1?page=2&category=Linked%20List&status=solved&sortBy=difficulty)

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
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) {
        Node* rev = reverseList(head);
        while(head){
            if(head->data != rev->data){
                return false;
            }
            head = head->next;
            rev = rev->next;
        }
        return true;
    }
};
```