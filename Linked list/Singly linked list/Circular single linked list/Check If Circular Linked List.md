## Problem Statement

Given the **head**, the head of a singly linked list, find if the linked list is circular or not. A linked list is called circular if it is not NULL terminated and all nodes are connected in the form of a cycle. An empty linked list is considered circular.

- Note: The linked list does not contain any inner loop.

### for better understading
- Problem link : [Check If Circular Linked List](https://www.geeksforgeeks.org/problems/circular-linked-list/1?page=1&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

bool isCircular(Node *head) {
    Node* s = head;
    Node* f = head;
    if(s == NULL){
        return true;
    }
    while(f != NULL && f->next != NULL){
        s = s->next;
        f = f->next->next;
        if(s == f){
            return true;
        }
    }
    return false;
}
```