## Problem Statement

Write a program to find the **transpose** of a square matrix of size N*N. Transpose of a matrix is obtained by changing rows to columns and columns to rows.

### for better understading
- Problem link : [Transpose of Matrix](https://www.geeksforgeeks.org/problems/transpose-of-matrix-1587115621/1?page=1&category=Matrix&status=solved&sortBy=submissions)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int> >& matrix, int n){ 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}
```