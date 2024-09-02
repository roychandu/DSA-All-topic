## Problem Statement

Given a singly linked list, delete the middle of the linked list.

- Note:
    - If there are even nodes, then there would be two middle nodes, we need to delete the second middle element.
    - If the input linked list has a single node, then it should return NULL.
### for better understading
- Problem link : [Delete Middle of Linked List](https://www.geeksforgeeks.org/problems/delete-middle-of-linked-list/1?page=1&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

Node* deleteMid(Node* head){
    // int count = 0;
    // Node* temp = head;
    // Node* pre_temp = head;
    // if(head->next == NULL){
    //     return NULL;
    // }
    // while(temp != NULL){
    //     count++;
    //     temp = temp->next;
    // }
    // temp = head->next;
    // pre_temp = head;
    // count /= 2;
    // while(count > 1){
    //     temp = temp->next;
    //     pre_temp = pre_temp->next;
    //     count--;
    // }
    // pre_temp->next = temp->next;
    // return head;
    
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;
    while(fast && fast->next){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    prev->next = slow->next;
    return head;
}
```