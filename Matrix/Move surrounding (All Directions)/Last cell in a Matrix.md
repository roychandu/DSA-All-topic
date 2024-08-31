## Problem Statement

Given a binary matrix of dimensions  with R rows and C columns. Start from cell(0, 0), moving in the right direction. Perform the following operations: 

- If the value of matrix[i][j] is 0, then traverse in the same direction and check the next value.
- If the value of matrix[i][j] is 1, then update matrix[i][j] to 0 and change the current direction clockwise. ie - up, right, down, or left directions change to right, down, left, and up respectively.

Find the index of the cell where you will be forced to exit the matrix while performing the given traversal

### for better understading
- Problem link : [Last cell in a Matrix](https://www.geeksforgeeks.org/problems/last-cell-in-a-matrix/1?page=2&category=Matrix&status=solved&sortBy=submissions)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

pair<int,int> endPoints(vector<vector<int>> matrix, int R, int C){
    pair<int, int> res;
    int i = 0;
    int j = 0;
    int flag = 1;
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