## Problem Statement

Given a word pat and a text txt. Return the count of the occurrences of anagrams of the word in the text.


### for better understading
- Problem link : [Count Occurences of Anagrams](https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1?page=1&category=sliding-window&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

int search(string pat, string txt) {
	    unordered_map<char, int> m1, m2;
	    int count = 0;
	    int ws = 0;
	    for(int i = 0; i < pat.length(); i++){
	        m1[pat[i]]++;
	    }
	    for(int i = 0; i < pat.length(); i++){
	        m2[txt[i]]++;
	    }
	    for(int i = pat.length(); i <= txt.length(); i++){
	        if(m1 == m2){
	            count++;
	        }
	        m2[txt[i]]++;
	        m2[txt[ws]]--;
	        if(m2[txt[ws]] == 0) m2.erase(txt[ws]);
	        ws++;
	    }
	    return count;
}
```