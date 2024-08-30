## Problem Statement

Given an array of integers Arr of size N and a number K. Return the maximum sum of a subarray of size K.

- NOTE : A subarray is a contiguous part of any given array.

### for better understading
- Problem link : [Max Sum Subarray of size K
](https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1?page=1&category=sliding-window&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

long maximumSumSubarray(int K, vector<int> &Arr , int N){
        long sum = 0;
        for(int i = 0; i < K; i++){
            sum += Arr[i];
        }
        long maxsum = sum;
        for(int i = 1; i <= N - K; i++){
            long pre = Arr[i - 1];
            long nex = Arr[i + K - 1];
            sum = sum - pre + nex;
            maxsum = max(sum, maxsum);
        }
        return maxsum;
}
```