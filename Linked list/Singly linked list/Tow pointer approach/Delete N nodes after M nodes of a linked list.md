## Problem Statement

Given a linked list, delete n nodes after skipping m nodes of a linked list until the last of the linked list.

### for better understading
- Problem link : [Delete N nodes after M nodes of a linked list](https://www.geeksforgeeks.org/problems/delete-n-nodes-after-m-nodes-of-a-linked-list/1?page=2&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

void linkdelete(struct Node **head, int n, int m) {
    Node* curr = *head;
    Node* temp;
    while (curr) {
        for (int i = 1; i < m && curr; i++) {
            curr = curr->next;
        }
        if (curr == NULL) return;
        temp = curr->next;

        for (int i = 0; i < n && temp; i++) {
            temp = temp->next;
        }
        curr->next = temp;
        curr = temp;
    }
}
```