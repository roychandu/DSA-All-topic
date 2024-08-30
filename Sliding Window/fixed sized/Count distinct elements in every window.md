## Problem Statement

Given an array of integers and a number K. Find the count of distinct elements in every window of size K in the array.

### for better understading
- Problem link: [Count distinct element in every window](https://www.geeksforgeeks.org/problems/count-distinct-elements-in-every-window/1?page=1&category=sliding-window&status=solved&sortBy=difficulty)

### C++ Solution

```
#include<bits/stdc++.h>
using namespace std;

vector <int> countDistinct (int A[], int n, int k)
    {
        vector<int> ans;
        map<int, int> m;
        for(int i = 0; i < k; i++){
            m[A[i]]++;
        }
        ans.push_back(m.size());
        for(int i = k; i < n; i++){
            if(m[A[i - k]] == 1){
                m.erase(A[i-k]);
            }
            else{
                m[A[i-k]]--;
            }
            m[A[i]]++;
            ans.push_back(m.size());
        }
        return ans;
    }
```