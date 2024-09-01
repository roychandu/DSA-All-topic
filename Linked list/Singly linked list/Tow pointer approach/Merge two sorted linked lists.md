## Problem Statement

Given two sorted linked lists consisting of nodes respectively. The task is to merge both lists and return the head of the merged list.

### for better understading
- Problem link : [Merge two sorted linked lists](https://www.geeksforgeeks.org/problems/merge-two-sorted-linked-lists/1?page=2&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

Node* sortedMerge(Node* head1, Node* head2)  {  
    Node* t1=head1,*t2=head2;
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
```