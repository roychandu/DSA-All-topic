## Problem Statement

Given two integers M, N, and a 2D matrix Mat of dimensions MxN, clockwise rotate the elements in it.

### for better understading
- Problem link : [Rotate matrix elements clockwise](https://www.geeksforgeeks.org/problems/rotate-matrix-elements-clockwise2336/1?page=2&category=Matrix&status=solved&sortBy=submissions)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> rotateMatrix(int M, int N, vector<vector<int>> matrix) {
    int sr = 0;
    int sc = 0;
    int er = M-1;
    int ec = N-1;
    while(sr < er && sc < ec){
        int first_ele = matrix[sr][sc];
        // starting column
        for(int i = sr; i < er; i++){
            matrix[i][sc] = matrix[i+1][sc];
        }
        // end row
        for(int i = sc; i < ec; i++){
            matrix[er][i] = matrix[er][i+1];
        }sc++;
        // end column
        for(int i = er; i > sr; i--){
            matrix[i][ec] = matrix[i-1][ec];
        }er--;
        // string row
        for(int i = ec; i > sc; i--){
            matrix[sr][i] = matrix[sr][i-1];
        }
        matrix[sr][sc] = first_ele;
        sr++;
        ec--;
    }
    return matrix;
}
```