## Problem Statement

Given the head of a linked list, the task is to reverse this list and return the reversed head.

### for better understading
- Problem link : [Reverse a linked list](https://www.geeksforgeeks.org/problems/reverse-a-linked-list/1?page=1&category=Linked%20List&status=solved&sortBy=submissions)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

struct Node* reverseList(struct Node* head) {
    Node* pre = NULL;
    Node* curr = head;
    Node* nex;
    while(curr){
        nex = curr->next;
        curr->next = pre;
        pre = curr;
        curr = nex;
    }
    return pre;
}
```