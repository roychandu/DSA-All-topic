## Problem Statement

Given a binary array arr[] and an integer target, return the number of non-empty subarrays with a sum equal to the target.
- Note : A subarray is the contiguous part of the array.

### for better understading
- Problem link : [Binary subarray with sum](https://www.geeksforgeeks.org/problems/binary-subarray-with-sum/1?page=1&category=sliding-window&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

int Count_subarr(vector<int> &arr, int N, int k){
        int sum = 0;
        int count = 0;
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
int numberOfSubarrays(vector<int>& arr, int N, int target){
    return Count_subarr(arr, N, target) - Count_subarr(arr, N, target-1);
}
```