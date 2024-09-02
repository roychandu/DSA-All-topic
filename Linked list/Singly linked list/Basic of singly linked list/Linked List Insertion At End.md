## Problem Statement

Given the head of a Singly Linked List and a value x, insert that value x at the end of the LinkedList and return the modified Linked List.

### for better understading
- Problem link : [Linked List Insertion At End](https://www.geeksforgeeks.org/problems/linked-list-insertion-1587115620/1?page=1&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

Node *insertAtEnd(Node *head, int x) {
    Node* count_node = head;
    Node* tail = new Node(x);
    if(head == NULL){
        return tail;
    }
    while(count_node->next != NULL){
        count_node = count_node->next;
    }
    count_node->next = tail;
    // count_node = tail;
    return head;
}
```