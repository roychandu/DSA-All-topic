## Problem Statement

Given the head of a linked list, the task is to find the middle. For example, the middle of 1-> 2->3->4->5 is 3. If there are two middle nodes (even count), return the second middle. For example, middle of 1->2->3->4->5->6 is 4.

### for better understading
- Problem link : [Middle of a Linked List](https://www.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1?page=1&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

int getMiddle(Node *head) {
    int count = 0;
    Node* temp = head;
    if(head == NULL){
        return -1;
    }
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    temp = head;
    count /= 2;
    while(count--){
        temp = temp->next;
    }
    return temp->data;
    
    // Node* slow = head;
    // Node* fast = head;
    // while(fast && fast->next){
    //     slow = slow->next;
    //     fast = fast->next->next;
    // }
    // return slow->data;
}
```