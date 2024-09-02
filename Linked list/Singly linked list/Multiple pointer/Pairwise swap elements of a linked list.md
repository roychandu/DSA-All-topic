## Problem Statement

Given a singly linked list. The task is to swap elements in the linked list pairwise. For example, if the input list is 1 2 3 4, the resulting list after swaps will be 2 1 4 3.

- Note: You need to swap the nodes, not only the data. If only data is swapped then the driver code will print -1.
### for better understading
- Problem link : [Pairwise swap elements of a linked list](https://www.geeksforgeeks.org/problems/pairwise-swap-elements-of-a-linked-list-by-swapping-data/1?page=2&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

Node* pairWiseSwap(struct Node* head) {
    if(head->next == NULL){
        return head;
    }
    Node* pre = head;
    Node* res = head->next;
    Node* curr = head->next;
    Node* temp = curr->next;
    while(temp){
        if(temp->next == NULL){
            curr->next = pre;
            pre->next = temp;
            return res;
        }
        curr->next = pre;
        pre->next = temp->next;
        pre = temp;
        curr = temp->next;
        temp = curr->next;
        if(temp == NULL) break;
    }
    curr->next = pre;
    pre->next = temp;
    
    return res;
}
```