## Problem Statement

Given an array A[ ] of positive integers of size N, where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are M students, the task is to distribute chocolate packets among M students such that :
1. Each student gets exactly one packet.
2. The difference between maximum number of chocolates given to a student and minimum number of chocolates given to a student is minimum.

### for better understading
- Problem link : [Chocolate Distribution Problem](https://www.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(), a.end());
        long long mini = INT_MAX;
    
        for(int i = 0; i <= n - m; i++){
            mini = min(mini, a[i + m - 1] - a[i]);
        }
        return mini;
} 
```