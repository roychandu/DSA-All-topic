## Problem Statement

Given two linked lists head1 and head2, find the intersection of two linked lists. Each of the two linked lists contains distinct node values.

Note: The order of nodes in this list should be the same as the order in which those particular nodes appear in input head1 and return null if no common element is present.

### for better understading
- Problem link : [Intersection of Two Linked Lists](https://www.geeksforgeeks.org/problems/intersection-of-two-linked-list/1?page=1&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

Node* findIntersection(Node* head1, Node* head2){
    unordered_set<int> map;
    Node* res = NULL;
    Node* curr = res;
    while(head2 != NULL){
        map.insert(head2->data);
        head2 = head2->next;
    }
    while(head1 != NULL){
        if(map.find(head1->data) != map.end()){
            Node* temp = new Node(head1->data);
            if(res == NULL){
                res = temp;
                curr = temp;
            }
            else{
                curr->next = temp;
                curr = curr->next;
            }
            map.erase(head1->data);
        }
        head1 = head1->next;
    }
    return res;
}
```