## Problem Statement

You are given the head of a linked list. You have to replace all the values of the nodes with the nearest prime number. If more than one prime number exists at an equal distance, choose the smallest one. Return the head of the modified linked list.

### for better understading
- Problem link : [Prime List](https://www.geeksforgeeks.org/problems/prime-list--170646/1?page=2&category=Linked%20List&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;  // 0 and 1 are not prime numbers
    if (n == 2) return true;   // 2 is the only even prime number
    if (n % 2 == 0) return false;  // Other even numbers are not primes

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
Node *primeList(Node *head){
    Node* temp = head;
    while(temp){
        if(isPrime(temp->val)){
            temp = temp->next;
            continue;
        }
        else{
            int num1 = temp->val;
            int num2 = temp->val;
            while(!isPrime(num1) && !isPrime(num2)){
                num1++;
                num2--;
            }
            isPrime(num1) && isPrime(num2) ? temp->val = min(num1, num2) : isPrime(num2) ? temp->val = num2 : temp->val = num1;
        }
        temp = temp->next;
    }
    return head;
}
```