## Problem Statement

Given a matrix of  size n x m. Your task is to make Zeroes, that means in whole matrix when you find a zero, convert its upper, lower, left, and right value to zero and make that element the sum of the upper, lower, left and right value. Do the following tasks according to the initial matrix.

### for better understading
- Problem link : [Make Zeroes](https://www.geeksforgeeks.org/problems/make-zeroes4042/1?page=2&category=Matrix&status=solved&sortBy=submissions)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

void MakeZeros(vector<vector<int> >& matrix) {
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    
    vector<vector<int>> temp = matrix;
    int n = matrix.size();
    int m = matrix[0].size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(temp[i][j] == 0){
                int sum = 0;
                for(int k = 0; k < 4; k++){
                    int x = i + dx[k];
                    int y = j + dy[k];
                    if(x >= 0 && x < n && y >= 0 && y < m){
                        sum += temp[x][y];
                        matrix[x][y] = 0;
                    }
                }
            matrix[i][j] = sum;
            }
        }
    }
}
```