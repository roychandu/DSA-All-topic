## Problem Statement

Given an array arr[] of integers and a number x, the task is to find the sum of subarray having a maximum sum less than or equal to the given value of x.


### for better understading
- Problem link : [Maximum sum of subarray less than or equal to x](https://www.geeksforgeeks.org/problems/maximum-sum-of-subarray-less-than-or-equal-to-x4033/1?page=1&category=sliding-window&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

int findMaxSubarraySum(long long arr[], int n, long long sum){
	    int ws = 0;
	    int we = 0;
	    long long maxsum = INT_MIN;
	    long long curr_sum = 0;
	    while(we < n){
	       curr_sum += arr[we];
	       if(curr_sum <= sum ){
	           maxsum = max(curr_sum, maxsum);
	       }
	       else{
	           while(ws < n && curr_sum >= sum){
	               curr_sum -= arr[ws];
	               if(curr_sum <= sum){
	                   maxsum = max(curr_sum, maxsum);
	               }
	               ws++;
	           }
	       }
	       we++;
	   }
	   return maxsum;
}  
```