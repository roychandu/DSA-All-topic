## Problem Statement

You are given a node del_node of a Singly Linked List where you have to delete a value of the given node from the linked list but you are not given the head of the list.

By deleting the node value, we do not mean removing it from memory. We mean:

- The value of the given node should not exist in the linked list.
- The number of nodes in the linked list should decrease by one.
- All the values before & after the **del_node** node should be in the same order.

Note:

1. Multiple nodes can have the same values as the del_node, but you must only remove the node whose pointer del_node is given to you.
2. It is guaranteed that there exists a node with a value equal to the del_node value and it will **not be the last node** of the linked list.
### for better understading
- Problem link : [Delete without head pointer]()

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

void deleteNode(Node *del_node){
    Node* temp = del_node->next;
    del_node->data = temp->data;
    del_node->next = temp->next;
}
```