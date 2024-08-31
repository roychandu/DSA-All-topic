## Problem Statement

Given a binary matrix contains 0s and 1s only, we need to find the sum of coverage of all zeros of the matrix where coverage for a particular 0 is defined as a total number of ones around a zero in immediate left, right, up and bottom directions.

### for better understading
- Problem link : [Coverage of all Zeros in a Binary Matrix](https://www.geeksforgeeks.org/problems/coverage-of-all-zeros-in-a-binary-matrix4024/1?page=2&category=Matrix&status=solved&sortBy=submissions)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

int findCoverage(vector<vector<int>>& matrix) {
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    
    int count = 0;
    int n = matrix.size();
    int m = matrix[0].size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matrix[i][j] == 0){
                for(int k = 0; k < 4; k++){
                    int x = i + dx[k];
                    int y = j + dy[k];
                    if(x >= 0 && x < n && y >= 0 && y < m){
                        if(matrix[x][y] == 1) count++;
                    }
                }
            }
        }
    }
    return count;
}
```