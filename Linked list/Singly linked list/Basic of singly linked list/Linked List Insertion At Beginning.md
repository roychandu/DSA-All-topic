## Problem Statement

Given the head of a Singly Linked List and a value x, insert that value x at the beginning of the LinkedList and return the modified Linked List.

### for better understading
- Problem link : [Linked List Insertion At Beginning](https://www.geeksforgeeks.org/problems/linked-list-insertion-at-beginning/1?page=1&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

Node *insertAtBegining(Node *head, int x) {
    Node* temp = new Node(x);
    temp->next = head;
    head = temp;
    return head;
}
```