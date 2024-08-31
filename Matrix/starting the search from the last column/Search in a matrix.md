## Problem Statement

Given a matrix mat[][] of size N x M, where every row and column is sorted in increasing order, and a number X is given. The task is to find whether element X is present in the matrix or not.


### for better understading
- Problem link : [Search in a matrix](https://www.geeksforgeeks.org/problems/search-in-a-matrix17201720/1?page=1&category=Matrix&status=solved&sortBy=submissions)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

int matSearch (vector <vector <int>> &arr, int N, int M, int X){
    int i = 0;
    int j  = M-1;
    while(i < N && j >= 0){
        if(arr[i][j] >= X){
            while(j >= 0){
                if(arr[i][j] == X){
                    return 1;
                }
                j--;
            }
            j = M - 1;
            i++;
        }
        else{
            i++;
        }
    }
    return 0;
}
```