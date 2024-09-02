## Problem Statement

Given the head of a Singly Linked List and an index number k, The task is to find the node at the given index (k)(1-based index) of the linked list. 
If no such node exists whose index is k then return -1.

### for better understading
- Problem link : [Node at a given index in linked list](https://www.geeksforgeeks.org/problems/node-at-a-given-index-in-linked-list/1?page=2&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

int GetNth(Node *head, int index) {
    if(index == 0){
        return -1;
    }
    while(--index && head){
        head = head->next;
    }
    return head == NULL ? -1 : head->data;
}
```