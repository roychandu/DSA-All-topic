## Problem Statement

Given a matrix of size n x m with 0’s and 1’s, you enter the matrix at cell (0,0) in left to right direction. Whenever you encounter a 0 you retain it in the same direction, else if you encounter a 1 you have to change the direction to the right of the current direction and change that 1 value to 0, you have to find out from which index you will leave the matrix at the end.

### for better understading
- Problem link : [Exit Point in a Matrix](https://www.geeksforgeeks.org/problems/exit-point-in-a-matrix0905/1?page=2&category=Matrix&status=solved&sortBy=submissions)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

vector<int> FindExitPoint(int n, int m, vector<vector<int>>& matrix) {
    int i = 0;
    int j = 0;
    int flag = 1;
    while(i >= 0 && i < n && j >= 0 && j < m){
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
        if(i < 0) return {i+1, j};
        if(i >= n) return {i-1, j};
        if(j < 0) return {i, j+1};
        if(j >= m) return {i, j-1};
    }  
}
```