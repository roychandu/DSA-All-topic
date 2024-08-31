## Problem Statement

You are given a rectangular matrix, and your task is to return an array while **traversing** the matrix in **spiral** form.

### for better understading
- Problem link : [Spirally traversing a matrix](https://www.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1?page=1&category=Matrix&status=solved&sortBy=submissions)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
    vector<int> res;
    int r = matrix.size();
    int c = matrix[0].size();
    int sr = 0;
    int sc = 0;
    int er = r-1;
    int ec = c-1;
    while(sr <= er && sc <= ec){
        // starting row
        for(int i = sc; i <= ec; i++){
            res.push_back(matrix[sr][i]);
        }sr++;
        // end column
        for(int i = sr; i <= er; i++){
            res.push_back(matrix[i][ec]);
        }ec--;
        // end row
        if(sr <= er){
            for(int i = ec; i >= sc; i--){
                res.push_back(matrix[er][i]);
            }er--;
        }
        // string column
        if(sc <= ec){
            for(int i = er; i >= sr; i--){
                res.push_back(matrix[i][sc]);
            }sc++;
        }
    }
    return res;
}
```