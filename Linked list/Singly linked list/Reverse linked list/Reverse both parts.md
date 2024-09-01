## Problem Statement

Given a linked list and a number k. You have to reverse the first part of the linked list with k nodes and the second part with n-k nodes.

### for better understading
- Problem link : [Reverse both parts](https://www.geeksforgeeks.org/problems/reverse-both-parts--170647/1?page=1&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

Node *reverse(Node *head, int k){
    int count = 0;
    Node* Rev_head = NULL;
    Node* curr = head;
    Node* nex;
    while(curr){
        nex = curr->next;
        curr->next = Rev_head;
        Rev_head = curr;
        curr = nex;
        count++;
    }
    count = count - k-1;
    Node* temp = Rev_head;
    while(count--){
        temp = temp->next;
    }
    head->next = Rev_head;
    head = temp->next;
    temp->next = NULL;
    return head;
}
```