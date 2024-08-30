## Problem Statement

Given an array A[] of size N and a positive integer K, find the first negative integer for each and every window(contiguous subarray) of size K.


### for better understading
- Problem link : [First negative in every window of size k
](https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1?page=1&category=sliding-window&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int A[], long long int N,long long int K) {
    vector<long long> ans;
    queue<long long> q;
    // first window
    for(int i = 0; i < K-1; i++){
        if(A[i] < 0) q.push(A[i]);
    }
    // another window
    for(int i = K-1; i < N; i++){
        if(A[i] < 0) q.push(A[i]);
        if(! q.empty()){
            ans.push_back(q.front());
            if(q.front() == A[i - K + 1]){
                q.pop();
            }
        }
        else{
            ans.push_back(0);
        }
    }
    return ans;
 }
```
###### In this problem use `Queue DataSturcture`. 