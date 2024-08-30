## Problem Statement

Given a string 's'. The task is to find the smallest window length that contains all the characters of the given string at least one time.
For eg. A = aabcbcdbca, then the result would be 4 as of the smallest window will be dbca.

### for better understading
- Problem link : [Smallest distinct window](https://www.geeksforgeeks.org/problems/smallest-distant-window3132/1?page=1&category=sliding-window&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

int findSubString(string str)
    {
        int size = str.size();
        unordered_map<char, int> m1;
        for(int i = 0; i < size; i++){
            m1[str[i]]++;
        }
        int size_m1 = m1.size();
        int ws = 0;
        int we = 0;
        int mini = INT_MAX;
        unordered_map<char, int> m2;
        while(we < size){
            m2[str[we]]++;
            while(size_m1 == m2.size()){
                mini = min(mini, we - ws + 1);
                m2[str[ws]]--;
                if(m2[str[ws]] == 0){
                    m2.erase(str[ws]);
                }
                ws++;
            }
            we++;
        }
        return mini;
}
```