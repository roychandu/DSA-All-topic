## Problem Statement

Given an NxM 2D matrix, rearrange such that 
Each diagonal in the lower left triangle of the rectangular grid is sorted in ascending order. 
Each diagonal in the upper right triangle of the rectangular grid is sorted in descending order. 
The major diagonal in the grid starting from the top-left corner is not rearranged. 

### for better understading
- Problem link : [Sort a 2D vector diagonally](https://www.geeksforgeeks.org/problems/diagonal-morning-assembly0028/1?page=2&category=Matrix&status=solved&sortBy=submissions)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

void diagonalSort(vector<vector<int> >& matrix, int n, int m) {
    int i, j;
    int temp[min(n, m)];
    // for lower triangle
    for(i = 1; i < n; i++){
        for(j = 0; j < m && j+i < n; j++){
            temp[j] = matrix[i+j][j];
        }
        sort(temp, temp+j);
        for(j = 0; j < m && j+i < n; j++){
            matrix[j+i][j] = temp[j];
        }
    }
    // for upper triangle
    for(i = 1; i < m; i++){
        for(j = 0; j < n && j+i < m; j++){
            temp[j] = matrix[j][j+i];
        }
        sort(temp, temp+j, greater<int>());
        for(j = 0; j < n && j+i < m; j++){
            matrix[j][j+i] = temp[j];
        }
    }
    
}
```