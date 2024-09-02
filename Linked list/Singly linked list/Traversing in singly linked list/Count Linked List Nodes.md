## Problem Statement

Given a singly linked list. The task is to find the length of the linked list, where length is defined as the number of nodes in the linked list.

### for better understading
- Problem link : [Count Linked List Nodes](https://www.geeksforgeeks.org/problems/count-nodes-of-linked-list/1?page=1&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

int getCount(struct Node* head) {
    int count = 0;
    Node* temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
```