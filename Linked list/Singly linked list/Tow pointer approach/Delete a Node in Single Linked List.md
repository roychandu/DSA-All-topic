## Problem Statement

Given a singly linked list and an integer, x. Delete the x<sup>th</sup> node (1-based indexing) from the singly linked list.

### for better understading
- Problem link : [Delete a Node in Single Linked List](https://www.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1?page=1&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

Node* deleteNode(Node *head,int x){
    Node* temp = head->next;
    Node* pre_temp = head;
    if(x == 1){
        return temp;
    }
    int count_temp = 2;
    while(count_temp != x){
        temp = temp->next;
        pre_temp = pre_temp->next;
        count_temp++;
    }
    pre_temp->next = temp->next;
    return head;
}
```