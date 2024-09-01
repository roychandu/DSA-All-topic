## Problem Statement

Given a square matrix of size N X N, turn it by **180 degrees in anticlockwise** direction without using extra memory.

### for better understading
- Problem link : [C++ Matrix Rotation by 180 degree](https://www.geeksforgeeks.org/problems/c-matrix-rotation-by-180-degree0745/1?page=2&category=Matrix&status=solved&sortBy=submissions)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int> >& matrix) {
    // first column reverse
    int n = matrix.size();
    reverse(matrix.begin(), matrix.end());
    // row reverse
    for(int i = 0; i < n; i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
}
```