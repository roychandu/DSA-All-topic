## Problem Statement

Given a string S, find the length of the longest substring without repeating characters.


### for better understading
- Problem link : [Length of the longest substring](https://www.geeksforgeeks.org/problems/length-of-the-longest-substring3036/1?page=1&category=sliding-window&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

int longestUniqueSubsttr(string S){
        vector<int> m(256, 0);
        int max_len = 0;
        int ws = 0;
        
        for(int i = 0; i < S.length(); i++){
            m[S[i]]++;
            while(m[S[i]] > 1){
                m[S[ws]]--;
                ws++;
            }
            max_len = max(max_len, i - ws + 1);
        }
        return max_len;
}
```