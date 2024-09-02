## Problem Statement

Given elements as nodes of the two singly linked lists. The task is to multiply these two linked lists, say L1 and L2.

- Note: The output could be large take modulo $10^9$+7.
### for better understading
- Problem link : [Multiply two linked lists]()

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

long long multiplyTwoLists(Node *first, Node *second) {
    long long mod = 1000000007;
    long long num1 = 0;
    long long num2 = 0;
    while(first != NULL){
        num1 = (num1 * 10) % mod + first->data;
        first = first->next;
    }
    while(second != NULL){
        num2 = (num2 * 10) % mod + second->data;
        second = second->next;
    }
    return (num1 * num2) % mod;
}
```