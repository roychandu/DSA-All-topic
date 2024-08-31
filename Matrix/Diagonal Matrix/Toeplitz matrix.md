## Problem Statement

A Toeplitz (or diagonal-constant) matrix is a matrix in which each descending diagonal from left to right is constant, i.e., all elements in a diagonal are the same. Given a rectangular matrix mat, your task is to complete the function isToeplitz which returns true if the matrix is Toeplitz otherwise, it returns false.

### for better understading
- Problem link : [Toeplitz matrix](https://www.geeksforgeeks.org/problems/toeplitz-matrix/1?page=1&category=Matrix&status=solved&sortBy=submissions)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

bool isToeplitz(vector<vector<int>>& mat) {
    int row = mat.size();
    int col = mat[0].size();
    for(int i = 1; i < row; i++){
        for(int j = 1; j < col; j++){
            if(mat[i][j] != mat[i-1][j-1]){
                return false;
            }
        }
    }
    return true;
}
```