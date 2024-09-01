## Problem Statement

Given two linked lists head1 and head2, your task is to complete the function mergeList() which inserts nodes of the second list into the first list at alternate positions of the first list and leaves the remaining nodes as it is if they cannot be inserted.

The function should return an array containing the two modified linked list heads in their original order.

### for better understading
- Problem link : [Merge Lists Alternatingly](https://www.geeksforgeeks.org/problems/merge-list-alternatingly/1?page=1&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

vector<Node *> mergeList(struct Node **head1, struct Node **head2) {
    Node* merge = *head1;
    Node* list1 = *head1;
    Node* list2 = *head2;
    while(list1 && list2){
        Node* temp = list1->next;
        list1->next = list2;
        list2 = list2->next;
        list1 = list1->next;
        list1->next = temp;
        list1 = list1->next;
    }
    return {merge, list2};
}
```