## Problem Statement

You are given a matrix of dimensions **n x m**. The task is to perform boundary traversal on the matrix in a clockwise manner starting from the first row of the matrix.

### for better understading
- Problem link : [Boundary traversal of matrix](https://www.geeksforgeeks.org/problems/boundary-traversal-of-matrix-1587115620/1?page=1&category=Matrix&status=solved&sortBy=submissions)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

vector<int> boundaryTraversal(vector<vector<int> > mat, int n, int m) {
    vector<int> res;
    for(int i = 0; i < m; i++){
        res.push_back(mat[0][i]);
    }
    for(int i = 1; i < n; i++){
        res.push_back(mat[i][m-1]);
    }
    if(n > 1){
        for(int i = m-2; i >= 0; i--){
            res.push_back(mat[n-1][i]);
        }
    }
    if(m > 1){
        for(int i = n-2; i >= 1; i--){
            res.push_back(mat[i][0]);
        }
    }
    return res;
}
```