## Problem Statement

Given a linked list. Print all the elements of the linked list separated by space followed.

### for better understading
- Problem link : [Print Linked List elements](https://www.geeksforgeeks.org/problems/print-linked-list-elements/1?page=1&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

void display(Node *head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
```