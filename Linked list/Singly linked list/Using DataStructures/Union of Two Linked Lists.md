## Problem Statement

Given two linked lists (L1 & L2), your task is to complete the function makeUnion(), which returns the union list of two linked lists. This union list should include all the distinct elements only and it should be sorted in ascending order.

### for better understading
- Problem link : [Union of Two Linked Lists](https://www.geeksforgeeks.org/problems/union-of-two-linked-list/1?page=2&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

struct Node* makeUnion(struct Node* head1, struct Node* head2){
    std::set<int> st;
    while (head1) {
        st.insert(head1->data);
        head1 = head1->next;
    }
    while (head2) {
        st.insert(head2->data);
        head2 = head2->next;
    }
    Node* res = NULL;
    Node* temp = NULL;
    for (auto it : st) {
        Node* newNode = new Node(it);
        if (!res) {
            res = newNode;
            temp = res;
        } else {
            temp->next = newNode;
            temp = temp->next;
        }
    }

    return res;
}
```