## Problem Statement

Given a string of lowercase alphabets, count all possible substrings (not necessarily distinct) that have exactly k distinct characters. 


### for better understading
- Problem link : [Count number of substrings](https://www.geeksforgeeks.org/problems/count-number-of-substrings4528/1?page=1&category=sliding-window&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

long long Count_subarr(string s, int k){
        vector<int> vec(26, 0);
        long long count = 0;
        long long ans = 0;
        int ws = 0;
        int i = 0;
        while(i < s.length()){
            vec[s[i] - 'a']++;
            if(vec[s[i] - 'a'] == 1) count++;
            while(count > k){
                vec[s[ws] - 'a']--;
                if(vec[s[ws] - 'a'] <= 0) count--;
                ws++;
            }
            ans += i - ws + 1;
            i++;
        }
        return ans;
}       
long long int substrCount (string s, int k) {
    return Count_subarr(s, k) - Count_subarr(s, k-1);
}
```