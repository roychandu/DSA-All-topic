## Problem Statement

Given the head of a singly linked list, the task is to check if the linked list has a loop. A loop means that the last node of the linked list is connected back to a node in the same list.  So if the next of the last node is null. then there is no loop.

- Note: You need to return a boolean value true if there is a loop, otherwise false.

The following is an internal representation of every test case (three inputs).
A LinkedList and a pos (1-based index)-Position of the node to which the last node links back if there is a loop. If the linked list does not have any loop, then pos = 0.

### for better understading
- Problem link : [Detect Loop in linked list](https://www.geeksforgeeks.org/problems/detect-loop-in-linked-list/1?page=3&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

bool detectLoop(Node* head){
    Node* s = head;
    Node* f = head;
    int count = 0;
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