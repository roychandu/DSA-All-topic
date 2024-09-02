## Problem Statement

Given a singly linked list and a key, count the number of occurrences of the given key in the linked list.

### for better understading
- Problem link : [Occurence of an integer in a Linked List](https://www.geeksforgeeks.org/problems/occurence-of-an-integer-in-a-linked-list/1?page=2&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

int count(struct Node* head, int key) {
    int count = 0;
    while(head){
        if(head->data == key) count++;
        head = head->next;
    }
    return count;
}
```