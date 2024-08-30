## Problem Statement

Given a string S consisting of the characters 0, 1 and 2. Your task is to find the length of the smallest substring of string S that contains all the three characters 0, 1 and 2. If no such substring exists, then return -1.


### for better understading
- Problem link : [Smallest window containing 0, 1 and 2](https://www.geeksforgeeks.org/problems/smallest-window-containing-0-1-and-2--170637/1?page=1&category=sliding-window&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

int smallestSubstring(string S) {
        vector<int> m(3, 0);
        int n = S.length();
        int len = 0;
        int mini = INT_MAX;
        int ws = 0;
        int i = 0;
        int count = 0;
        while(i < n) {
            m[S[i] - '0']++;
            if(m[S[i] - '0'] == 1) count++;
            while (count == 3) {
                mini = min(i - ws + 1, mini);
                m[S[ws] - '0']--;
                if(m[S[ws] - '0'] <= 0) {
                    count--;
                }
                ws++;
            }
            i++;
        }
        return (mini == INT_MAX) ? -1 : mini;
}
```