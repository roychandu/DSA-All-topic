## Problem Statement

Given a linked list, the task is to move all 0s to the front of the linked list. The order of all other elements except 0 should be the same after rearrangement.

### for better understading
- Problem link : [Move all zeros to the front of the linked list](https://www.geeksforgeeks.org/problems/move-all-zeros-to-the-front-of-the-linked-list/1?page=1&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

void moveZeroes(struct Node **head){
    Node* pre = *head;
    Node* curr = pre->next;
    while(curr){
        if(curr->data == 0){
            pre->next = curr->next;
            curr->next = *head;
            *head = curr;
            curr = pre->next;
        }
        else{
            pre = curr;
            curr = curr->next;
        }
    }
}
```