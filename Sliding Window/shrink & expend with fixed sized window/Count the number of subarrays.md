## Problem Statement

Given an array A[] of N integers and a range(L, R). The task is to find the number of subarrays having sum in the range L to R (inclusive).


### for better understading
- Problem link : [Count the number of subarrays](https://www.geeksforgeeks.org/problems/count-the-number-of-subarrays/1?page=1&category=sliding-window&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

long long Count_subarr(int N, vector<int> arr, long long k){
        long long sum = 0;
        long long count = 0;
        int i = 0;
        int ws = 0;
        while(i < N){
            sum += arr[i];
            while(sum > k){
                sum -= arr[ws++];
            }
            count += i - ws + 1;
            i++;
        }
        return count;
}
long long countSubarray(int N,vector<int> A,long long L,long long R) {
    return Count_subarr(N, A, R) - Count_subarr(N, A, L-1);
}
```