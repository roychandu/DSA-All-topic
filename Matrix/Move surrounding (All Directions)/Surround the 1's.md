## Problem Statement

Given a matrix of order nxm, composed of only 0's and 1's, find the number of 1's in the matrix that are surrounded by an even number (>0) of 0's. The surrounding of a cell in the matrix is defined as the elements above, below, on left, on right as well as the 4 diagonal elements around the cell of the matrix. Hence, the surrounding of any matrix elements is composed of 8 elements. Find the number of such 1's.

### for better understading
- Problem link : [Surround the 1's](https://www.geeksforgeeks.org/problems/surround-the-1s2505/1?page=1&category=Matrix&status=solved&sortBy=submissions)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

int Count(vector<vector<int> >& matrix) {
    int dx[] = {-1, 1, 0, 0, -1, 1, -1, 1};
    int dy[] = {0, 0, 1, -1, -1, -1, 1, 1};
    int res = 0;
    int n = matrix.size();
    int m = matrix[0].size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matrix[i][j] == 1){
                int count = 0;
                for(int k = 0; k < 8; k++){
                    int x = i + dx[k];
                    int y = j + dy[k];
                    if(x >= 0 && x < n && y >= 0 && y < m){
                        if(matrix[x][y] == 0){
                            count++;
                        }
                    }
                }
            if(count > 0 && count%2 == 0) res++;
            }
        }
    }
    return res;
}
```