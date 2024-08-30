## Problem Statement

Given an array a of length n and a number k, find the largest sum of the subarray containing at least k numbers. It is guaranteed that the size of array is at-least k.


### for better understading
- Problem link : [Largest Sum Subarray of Size at least K](https://www.geeksforgeeks.org/problems/largest-sum-subarray-of-size-at-least-k3121/1?page=1&category=sliding-window&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

long long int maxSumWithK(long long int a[], long long int n, long long int k) 
    {
        long long int sum = 0;
        for(long long int i = 0; i < k; i++){
            sum += a[i];
        }
        long long int prefix_sum = sum;
        long long int max_sum = sum;
        for(long long int i = k; i < n; i++){
            sum += a[i] - a[i - k];
            prefix_sum = max(prefix_sum + a[i], sum);
            max_sum = max(prefix_sum, max_sum);
        }
        return max_sum;
    }
```