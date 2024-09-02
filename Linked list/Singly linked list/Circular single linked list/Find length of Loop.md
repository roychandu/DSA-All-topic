## Problem Statement

Given the head of a linked list, determine whether the list contains a loop. If a loop is present, **return the number of nodes** in the loop, otherwise return 0.

### for better understading
- Problem link : [Find length of Loop](https://www.geeksforgeeks.org/problems/find-length-of-loop/1?page=1&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

int countNodesinLoop(struct Node *head){
    Node* s = head;
    Node* f = head;
    int count = 0;
    while(f != NULL && f->next != NULL){
        s = s->next;
        f = f->next->next;
        if(s == f){
            count = 1;
            s = s->next;
            while(s != f){
                count++;
                s = s->next;
            }
            return count;
        }
    }
    
    return 0;
}
```