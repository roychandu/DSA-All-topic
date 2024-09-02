## Problem Statement

Given a linked list and a value x, partition it such that all nodes less than x come first, then all nodes with a value equal to x, and finally nodes with a value greater than x. The original relative order of the nodes in each of the three partitions should be preserved. The partition must work in place.

### for better understading
- Problem link : [Partition a Linked List around a given value](https://www.geeksforgeeks.org/problems/partition-a-linked-list-around-a-given-value/1?page=3&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

struct Node* partition(struct Node* head, int x) {
    Node* t1= new Node(0);
    Node* t2= new Node(0);
    Node* t3=new Node(0);
    Node* curr=t1;
    Node* temp=t2;
    Node* temp2=t3;
    while(head!=NULL){
        if(head->data < x){
            curr=curr->next=head;
        }
        else if(head->data==x){
            temp2=temp2-> next=head;
        }
        else {
            temp=temp->next=head;
        }
        head=head->next;
    }
    if(t3->next!=NULL){
        curr->next=t3->next;
        temp2->next=t2->next;
        temp->next=NULL;
        return t1->next;
    }
    else {
        curr->next=t2->next;
        temp->next=NULL;
        return t1-> next;
    }
}
```