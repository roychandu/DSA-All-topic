## Problem Statement

Given a linked list where nodes can contain values 0s, 1s, and 2s only. The task is to segregate 0s, 1s, and 2s linked list such that all zeros segregate to the head side, 2s at the end of the linked list, and 1s in the middle of 0s and 2s.

### for better understading
- Problem link : [Sort a linked list of 0s, 1s and 2s](https://www.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1?page=2&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

Node* segregate(Node *head) {
    int arr[3] = {0};
    Node* temp = head;
    while(temp){
        arr[temp->data]++;
        temp = temp->next;
    }
    temp = head;
    for(int i = 0; i < 3; i++){
        int term = arr[i];
        while(term--){
            temp->data = i;
            temp = temp->next;
        }
    }
    return head;
}
```