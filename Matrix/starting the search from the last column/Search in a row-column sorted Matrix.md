## Problem Statement

Given a matrix of size n x m, where every row and column is sorted in increasing order, and a number x. Find whether element x is present in the matrix or not. Return a boolean value true if x is present in the matrix and false if it is not present.

### for better understading
- Problem link : [Search in a row-column sorted Matrix](https://www.geeksforgeeks.org/problems/search-in-a-matrix-1587115621/1?page=1&category=Matrix&status=solved&sortBy=submissions)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

bool search(vector<vector<int> > arr, int N, int M, int X) {
    int i = 0;
    int j  = M-1;
    while(i < N && j >= 0){
        if(arr[i][j] >= X){
            while(j >= 0){
                if(arr[i][j] == X){
                    return true;
                }
                j--;
            }
            j = M - 1;
            i++;
        }
        else{
            i++;
        }
    }
    return false;
}
```