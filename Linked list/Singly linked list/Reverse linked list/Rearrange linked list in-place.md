## Problem Statement

Given a singly linked list L0 -> L1 -> … -> Ln-1 -> Ln. Rearrange the nodes in the list so that the newly formed list is: L0 -> Ln -> L1 -> Ln-1 -> L2 -> Ln-2.

### for better understading
- Problem link : [Rearrange linked list in-place](https://www.geeksforgeeks.org/problems/rearrange-linked-list-in-place/1?page=3&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

class Solution {
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
    Node *inPlace(Node *head) {
        if (!head || !head->next) return head;
    
        Node* slow = head;
        Node* fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        Node* secondHalf = reverseList(slow->next);
        slow->next = NULL;
        Node* firstHalf = head;
        while (secondHalf) {
            Node* temp1 = firstHalf->next;
            Node* temp2 = secondHalf->next;
    
            firstHalf->next = secondHalf;
            secondHalf->next = temp1;
    
            firstHalf = temp1;
            secondHalf = temp2;
        }
        return head;
    }
};
```