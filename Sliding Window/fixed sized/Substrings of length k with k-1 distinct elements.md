## Problem Statement

Given a String S consisting only lowercase alphabets and an integer K. Find the count of all substrings of length K which have exactly K-1 distinct characters.

### for better understading
- Problem link : [Substrings of length k with k-1 distinct elements](https://www.geeksforgeeks.org/problems/substrings-of-length-k-with-k-1-distinct-elements/1?page=1&category=sliding-window&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

int countOfSubstrings(string S, int K) {
        unordered_map<char, int> m;
        int count = 0;
        for(int i = 0; i < K; i++){
            m[S[i]]++;
        }
        if(m.size() == K-1) count++;
        int ws = 0;
        for(int i = K; i < S.length(); i++){
            m[S[ws]]--;
            if(m[S[ws]] == 0) m.erase(S[ws]);
            m[S[i]]++;
            if(m.size() == K-1) count++;
            ws++;
        }
        return count;
}
```