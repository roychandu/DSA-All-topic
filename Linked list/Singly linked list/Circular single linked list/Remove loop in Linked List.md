## Problem Statement

Given the head of a linked list that may contain a loop.  A loop means that the last node of the linked list is connected back to a node in the same list.  So if the next of the previous node is null. then there is no loop.  Remove the loop from the linked list, if it is present (we mainly need to make the next of the last node null). Otherwise, keep the linked list as it is.

- Note: Given an integer, pos (1 based index)  Position of the node to which the last node links back if there is a loop. If the linked list does not have any loop, then pos = 0.

The generated output will be true if your submitted code is correct, otherwise, false.
### for better understading
- Problem link : [Remove loop in Linked List]()

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

void removeLoop(Node* head){
    unordered_map<Node*, bool> mp;
    Node* pre = NULL;
    Node* curr = head;
    while(curr){
        if(mp[curr] == true){
            break;
        }
        mp[curr] = 1;
        pre = curr;
        curr = curr->next;
    }
    if(mp[curr] == true){
        pre->next = NULL;
    }
}
```