## Problem Statement

You are given the head of a Linked List. You have to move the last element to the front of the Linked List and return the head the modified linked list.

### for better understading
- Problem link : [Move Last Element to Front of a Linked List](https://www.geeksforgeeks.org/problems/move-last-element-to-front-of-a-linked-list/1?page=1&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

ListNode *moveToFront(ListNode *head){
    ListNode* curr = head;
    if(curr->next == NULL){
        return curr;
    }
    while(1){
        if(curr->next->next == NULL){
            ListNode* temp = curr->next;
            curr->next = NULL;
            temp->next = head;
            return temp;
        }
        curr = curr->next;
    }
}
```