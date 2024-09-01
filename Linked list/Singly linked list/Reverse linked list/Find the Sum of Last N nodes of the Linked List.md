## Problem Statement

Given a single linked list, calculate the sum of the last n nodes.

### for better understading
- Problem link : [Find the Sum of Last N nodes of the Linked List](https://www.geeksforgeeks.org/problems/find-the-sum-of-last-n-nodes-of-the-linked-list/1?page=1&category=Linked%20List&status=solved&sortBy=difficulty)

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

int sumOfLastN_Nodes(struct Node* head, int n) {
    Node* Rev_head = reverseList(head);
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += Rev_head->data;
        Rev_head = Rev_head->next;
    }
    return sum;
}
```