## Problem Statement

Given an integer array arr[] and an integer k, return the number of good subarrays of arr[]. A good array is an array where the number of distinct integers in that is exactly k.

- Note : A subarray is a contiguous part of an array.

### for better understading
- Problem link : [Subarrays with K Distinct Integers](https://www.geeksforgeeks.org/problems/subarrays-with-k-different-integers/1?page=1&category=sliding-window&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

int Count_subarr(vector<int> &arr, int N, int k){
      unordered_map<int, int> m;
      int ws = 0;
      int count = 0;
      int i = 0;
      while(i < N){
          m[arr[i]]++;
          while(m.size() > k){
              m[arr[ws]]--;
              if(m[arr[ws]] == 0){
                  m.erase(arr[ws]);
              }
              ws++;
          }
          count += i - ws + 1;
          i++;
      }
      return count;
  }
int subarrayCount(vector<int> &arr, int N, int k) {
    return Count_subarr(arr, N, k) - Count_subarr(arr, N, k-1);
}
```