## Problem Statement

Given a singly linked list, remove all the nodes with any node on their right whose value is greater and return the head of the modified linked list.  (Not just the immediate Right, but the entire List on the Right)

### for better understading
- Problem link : [Delete nodes having greater value on right](https://www.geeksforgeeks.org/problems/delete-nodes-having-greater-value-on-right/1?page=2&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    Node* reverse(Node* head){
        Node* pre = NULL;
        Node* curr = head;
        Node* nex;
        while(curr){
            nex = curr->next;
            curr->next = pre;
            pre = curr;
            curr = nex;
        }
        return pre;
    }
    public:
    Node *compute(Node *head)
    {
        Node* rev_head = reverse(head);
        
        int max = rev_head->data;
        
        Node* rev_result = new Node(max);
        // Cpoy Node cureate kar raha hai.
        Node* curr = rev_result;
        // For traversing
        Node* temp = rev_head->next;
        while(temp){
            if(temp->data >= max){
                max = temp->data;
                curr->next = new Node(max);
                curr = curr->next;
            }
            temp = temp->next;
        }
        Node* finalNode = reverse(rev_result);
        return finalNode;
    }
    
};
```