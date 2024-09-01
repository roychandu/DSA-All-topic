## Problem Statement

Given a linked list sorted in ascending order and an integer called x, insert data in the linked list such that the list remains sorted.

### for better understading
- Problem link : [Insert in a Sorted List](https://www.geeksforgeeks.org/problems/insert-in-a-sorted-list/1?page=1&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

Node *sortedInsert(struct Node* head, int data) {
    // for 1st position
    Node* temp = new Node(data);
    if(data < head->data){
        temp->next = head;
        return temp;
    }
    Node* curr = head;
    Node* pre = NULL;
    while(curr && data >= curr->data){
        pre = curr;
        curr = curr->next;
    }
    temp->next = curr;
    pre->next = temp;
    return head;
}
```