## Problem Statement

Given a singly linked list. The link list represents a binary number, ie- it contains only 0s and 1s. Find its decimal equivalent.
The significance of the bits decreases with the increasing index in the linked list. An empty linked list is considered to represent the decimal value 0. 

Since the answer can be very large, the answer modulo $10^9$+7 should be returned.

### for better understading
- Problem link : [Decimal Equivalent of Binary Linked List](https://www.geeksforgeeks.org/problems/decimal-equivalent-of-binary-linked-list/1?page=1&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

long long unsigned int decimalValue(Node *head){
    long long unsigned int ans = 0;
    while(head){
       ans = (ans*2 + head->data) % MOD;
       head = head->next;
    }
    return ans;
}
```