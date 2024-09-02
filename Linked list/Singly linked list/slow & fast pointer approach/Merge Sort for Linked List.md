## Problem Statement

Given a pointer/reference to the head of the linked list, the task is to **sort the given linked list using Merge Sort**.
- Note: If the length of the linked list is odd, then the extra node should go into the first list while splitting.
### for better understading
- Problem link : [Merge Sort for Linked List](https://www.geeksforgeeks.org/problems/sort-a-linked-list/1?page=2&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

Node* merge(Node* &first,Node* &second){
    Node* t1=first,*t2=second;
    Node* dummy=new Node(-1);
    Node* ans=dummy;
    while(t1 && t2){
        if(t1->data<t2->data){
            dummy->next=t1;
            t1=t1->next;
            dummy=dummy->next;
        }
        else{
            dummy->next=t2;
            t2=t2->next;
            dummy=dummy->next;
        }
    }
    
    while(t1){
        dummy->next=t1;
        t1=t1->next;
        dummy=dummy->next; 
    }
    
    while(t2){
        dummy->next=t2;
        t2=t2->next;
        dummy=dummy->next; 
    }
    
    ans=ans->next;
    
    return ans;
}
Node* mergeSort(Node* head) {
    if(!head || !head->next) return head;
    
    Node* fast=head,*slow=head;
    while(fast->next && fast->next->next){
        slow=slow->next,fast=fast->next->next;
    }
    
    Node* second=slow->next;
    slow->next=NULL;
    Node* first=mergeSort(head);
    second=mergeSort(second);
    
    return merge(first,second);
}
```