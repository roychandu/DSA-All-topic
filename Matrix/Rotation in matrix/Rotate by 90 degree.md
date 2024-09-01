## Problem Statement

Given a square matrix of size N x N. The task is to rotate it by **90 degrees in anti-clockwise** direction without using any extra space. 

### for better understading
- Problem link : [Rotate by 90 degree](https://www.geeksforgeeks.org/problems/rotate-by-90-degree-1587115621/1?page=1&category=Matrix&status=solved&sortBy=submissions)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

void rotateby90(vector<vector<int> >& matrix, int n) { 
    // first Transpose
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // column reverse
    reverse(matrix.begin(), matrix.end());
}
```