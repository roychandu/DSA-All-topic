## Problem Statement

Given a boolean matrix of size RxC where each cell contains either 0 or 1, modify it such that if a matrix cell matrix[i][j] is 1 then all the cells in its ith row and jth column will become 1.

### for better understading
- Problem link : [Boolean Matrix](https://www.geeksforgeeks.org/problems/boolean-matrix-problem-1587115620/1?page=1&category=Matrix&status=solved&sortBy=submissions)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

void booleanMatrix(vector<vector<int> > &matrix){
    int row = matrix.size();
    int col = matrix[0].size();
    vector<int> row_vec(row, 0);
    vector<int> col_vec(col, 0);
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(matrix[i][j] == 1){
                row_vec[i] = 1;
                col_vec[j] = 1;
            }
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(row_vec[i] == 1  || col_vec[j] == 1){
                matrix[i][j] = 1;
            }
        }
    }
}
```