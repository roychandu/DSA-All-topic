## Problem Statement

Given two linked lists, which are sorted in **non-decreasing** order. The task is to merge them in such a way that the resulting list is in **non-increasing** order.

### for better understading
- Problem link : [Merge 2 sorted linked list in reverse order](https://www.geeksforgeeks.org/problems/merge-2-sorted-linked-list-in-reverse-order/1?page=2&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    Node* reverseList(Node* head){
        Node* pre = NULL;
        Node* curr = head;
        Node* nxt;
        while(curr){
            nxt = curr->next;
            curr->next = pre;
            pre = curr;
            curr = nxt;
        }
        return pre;
    }
    public:
    
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        Node* result = new Node();
        Node* dummy = result;
        while(node1 && node2){
            if(node1->data < node2->data){
                dummy->next = node1;
                node1 = node1->next;
            }
            else{
                dummy->next = node2;
                node2 = node2->next;
            }
            dummy = dummy->next;
        }
        dummy->next = (node1) ? node1 : node2;
        return reverseList(result->next);
    }  
};
```