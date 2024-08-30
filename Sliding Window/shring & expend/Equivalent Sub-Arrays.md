## Problem Statement

Given an array arr[] of n integers. Count the total number of sub-array having total distinct elements same as that of total distinct elements of the original array.


### for better understading
- Problem link : [Equivalent Sub-Arrays](https://www.geeksforgeeks.org/problems/equivalent-sub-arrays3731/1?page=1&category=sliding-window&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

int countDistinctSubarray(int arr[], int n){
        unordered_map<int, int> m1, m2;
        int count_sum = 0;
        int we = 0;
        int ws = 0;
        for(int i = 0; i < n; i++){
            m1[arr[i]]++;
        }
        while(ws < n){
            m2[arr[ws]]++;
            while(m1.size() == m2.size()){
                count_sum += n - ws;
                m2[arr[we]]--;
                if(m2[arr[we]] == 0) m2.erase(arr[we]);
                we++;
            }
            ws++;
        }
        return count_sum;
}
```