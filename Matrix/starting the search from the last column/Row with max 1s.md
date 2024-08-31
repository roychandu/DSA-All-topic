## Problem Statement

You are given a 2D array consisting of only 1's and 0's, where each row is sorted in non-decreasing order. You need to find and return the index of the first row that has the most number of 1s. If no such row exists, return -1.
- Note : 0-based indexing is followed.

### for better understading
- Problem link : [Row with max 1s](https://www.geeksforgeeks.org/problems/row-with-max-1s0023/1?page=1&category=Matrix&status=solved&sortBy=submissions)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	int i = 0;
    int j = m-1;
    int index = -1;
    while(i < n && j >= 0){
       if(arr[i][j] == 1){
           j--;
           index = i;
       }
       else{
           i++;
       }
    }
    return (index == -1) ? -1 : index;
}
```