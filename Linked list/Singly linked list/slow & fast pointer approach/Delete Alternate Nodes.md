## Problem Statement

Given a Singly Linked List, Delete all **alternate** nodes of the list ie delete all the nodes present in even positions.

### for better understading
- Problem link : [Delete Alternate Nodes](https://www.geeksforgeeks.org/problems/delete-alternate-nodes/1?page=1&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

void deleteAlt(struct Node *head) {
    Node* slow = head;
    Node* fast = slow->next;
    while(fast != NULL){
        if(fast->next == NULL){
            slow->next = NULL;
            break;
        }
        slow->next = fast->next;
        slow = slow->next;
        fast = slow->next;
    }
}
```