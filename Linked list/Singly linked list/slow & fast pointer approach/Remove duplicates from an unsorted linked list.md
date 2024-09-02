## Problem Statement

Given an unsorted linked list. The task is to remove duplicate elements from this unsorted Linked List. When a value appears in multiple nodes, the node which appeared first should be kept, all other duplicates are to be removed.

### for better understading
- Problem link : [Remove duplicates from an unsorted linked list](https://www.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1?page=2&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

Node * removeDuplicates( Node *head) {
    unordered_set<int> st;
    st.insert(head->data);
    
    Node* slow = head;
    Node* fast = slow->next;
    while(fast){
        if(st.find(fast->data) != st.end()){
            slow->next = fast->next;
            fast = slow->next;
        }
        else{
            slow = slow->next;
            fast = slow->next;
        }
        st.insert(slow->data);
    }
    return head;
}
```