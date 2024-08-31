## Problem Statement

Given a matrix as 2D array. Find the reverse spiral traversal of the matrix. 

### for better understading
- Problem link : [Reverse Spiral Form of Matrix](https://www.geeksforgeeks.org/problems/reverse-spiral-form-of-matrix4033/1?page=2&category=Matrix&status=solved&sortBy=submissions)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

vector<int> reverseSpiral(int R, int C, vector<vector<int>>&matrix)  {
    vector<int> res;
    int sr = 0;
    int sc = 0;
    int er = R-1;
    int ec = C-1;
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
    reverse(res.begin(), res.end());
    return res;
}
```