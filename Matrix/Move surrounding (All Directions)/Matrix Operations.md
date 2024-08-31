## Problem Statement

Given a binary matrix of dimensions M * N. One can perform the given operation in the matrix.

- If the value of matrix[i][j] is 0, then traverse in the same direction and check the next value.
- If the value of matrix[i][j] is 1, then update matrix[i][j] to 0 and change the current direction from up, right, down, or left to the directions right, down, left, and up respectively.

Initially you start from cell(0, 0), moving in right direction.

The task is to find the first cell of the matrix  which leads to outside the matrix from the traversal of the given matrix from the cell (0, 0) by performing the operations.
### for better understading
- Problem link : [Matrix Operations](https://www.geeksforgeeks.org/problems/matrix-operations/1?page=2&category=Matrix&status=solved&sortBy=submissions)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

pair<int,int> endPoints(vector<vector<int>> matrix){
    pair<int, int> res;
    int i = 0;
    int j = 0;
    int flag = 1;
    int R = matrix.size();
    int C = matrix[0].size();
    while(i >= 0 && i < R && j >= 0 && j < C){
        res.first = i;
        res.second = j;
        if(matrix[i][j] == 0){
            if(flag == 1) j++;
            else if(flag == 2) i++;
            else if(flag == 3) j--;
            else i--;
        }
        else{
            matrix[i][j] = 0;
            if(flag == 1){
                flag = 2;
                i++;
            }
            else if(flag == 2){
                flag = 3;
                j--;
            }
            else if(flag == 3){
                flag = 4;
                i--;
            }
            else{
                flag = 1;
                j++;
            }
        }
    }
    return res;
}
```