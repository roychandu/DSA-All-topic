## Problem Statement

Given a singly linked list, the task is to rearrange it in a way that all odd position nodes are together and all even position nodes are together. (Considering 1-based indexing.)

- Note: You should place all odd-positioned nodes first and then the even-positioned ones. Also, the relative order of odd-positioned nodes and even-positioned nodes should be maintained. 

### for better understading
- Problem link : [Rearrange a linked list](https://www.geeksforgeeks.org/problems/rearrange-a-linked-list/1?page=3&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

void rearrangeEvenOdd(Node *head) {
    if(head->next == NULL){
        return ;
    }
    Node* dummy = new Node(-1);
    Node* temp = dummy;
    while(head && head->next){
        temp->next = head->next;
        temp = temp->next;
        if(head->next->next == NULL){
            break;
        }
        head->next = head->next->next;
        head = head->next;
    }
    temp->next = NULL;
    head->next = dummy->next;
    return ;
}
```