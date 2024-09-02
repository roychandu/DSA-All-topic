## Problem Statement

Given the head of a linked list and the number k, Your task is to find the k<sup>th</sup>
 node from the end. If k is more than the number of nodes, then the output should be -1.

### for better understading
- Problem link : [Kth from End of Linked List](https://www.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1?page=2&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

int getKthFromLast(Node *head, int k) {
    Node* slow = head;
    Node* fast = head;
    int i = 0;
    while(i < k){
        if(slow == NULL){
            return -1;
        }
        slow = slow->next;
        i++;
    }
    while(slow != NULL){
        slow = slow->next;
        fast = fast->next;
    }
    return fast->data;
}
```