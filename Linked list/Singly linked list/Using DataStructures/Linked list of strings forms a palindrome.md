## Problem Statement

Given a linked list with string data, check whether the combined string formed is palindrome. If the combined string is palindrome then return true otherwise return false.

### for better understading
- Problem link : [Linked list of strings forms a palindrome](https://www.geeksforgeeks.org/problems/linked-list-of-strings-forms-a-palindrome/1?page=2&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

bool compute(Node* head) {
    string str = "";
    while(head){
        str += head->data;
        head = head->next;
    }
    int start = 0;
    int end = str.length() - 1;
    while(start < end){
        if(str[start++] != str[end--]){
            return false;
        }
    }
    return true;
}
```