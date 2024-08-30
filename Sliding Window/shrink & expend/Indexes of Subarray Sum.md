## Problem Statement

Given an unsorted array arr of size n that contains only non negative integers, find a sub-array (continuous elements) that has sum equal to s. You mainly need to return the left and right indexes(1-based indexing) of that subarray.

In case of multiple subarrays, return the subarray indexes which come first on moving from left to right. If no such subarray exists return an array consisting of element -1.

### for better understading
- Problem link : [Indexes of Subarray Sum](https://www.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1?page=1&category=sliding-window&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

vector<int> subarraySum(vector<int>arr, int n, long long s){
        long long sum = 0;
        int ws = 0;
        int i = 0;
        while(i < n){
            sum += arr[i];
            while(ws < i && sum > s){
                sum -= arr[ws++];
            }
            if(sum == s){
                return {ws+1, i+1};
            }
            i++;
        }
        return {-1};
}
```