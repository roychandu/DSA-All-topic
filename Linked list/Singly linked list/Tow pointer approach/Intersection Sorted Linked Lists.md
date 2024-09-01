## Problem Statement

Given **that two linked lists are** sorted in **increasing** order, create a new linked list representing the **intersection** of the two linked lists. The new linked list should be made with without changing the original lists.

- Note: The elements of the linked list are not necessarily distinct.

### for better understading
- Problem link : [Intersection Sorted Linked Lists](https://www.geeksforgeeks.org/problems/intersection-of-two-sorted-linked-lists/1?page=1&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

Node* findIntersection(Node* head1, Node* head2){
    Node* head = NULL;
    Node* last = head;
    while(head1 != NULL && head2 != NULL){
        if(head1->data == head2->data){
            Node* newnode = new Node(head2->data);
            if(head == NULL){
                head = newnode;
                last=head;
            }
            else{
                last->next = newnode;
                last = newnode;
            }
            head1=head1->next;
            head2=head2->next;
        }else if(head1->data > head2->data){
            head2 = head2->next;
        }else{
            head1 = head1->next;
        }
    }
    return head;
}
```