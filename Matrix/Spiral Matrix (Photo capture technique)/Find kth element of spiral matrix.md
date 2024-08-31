## Problem Statement

Given a matrix with n rows and m columns. Your task is to find the kth element which is obtained while traversing the matrix spirally. You need to complete the method findK which takes four arguments the first argument is the matrix A and the next two arguments will be n and m denoting the size of the matrix A and then the forth argument is an integer k. The function will return the kth element obtained while traversing the matrix spirally.

### for better understading
- Problem link : [Find kth element of spiral matrix](https://www.geeksforgeeks.org/problems/find-nth-element-of-spiral-matrix/1?page=1&category=Matrix&status=solved&sortBy=submissions)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

int findK(int matrix[MAX][MAX],int n,int m,int k){
    int sr = 0;
    int sc = 0;
    int er = n-1;
    int ec = m-1;
    int count = 0;
    while(sr <= er && sc <= ec){
        // starting row
        for(int i = sc; i <= ec; i++){
            count++;
            if(count == k){
                return matrix[sr][i];
            }
        }sr++;
        // end column
        for(int i = sr; i <= er; i++){
            count++;
            if(count == k){
                return matrix[i][ec];
            }
        }ec--;
        // end row
        if(sr <= er){
            for(int i = ec; i >= sc; i--){
                count++;
                if(count == k){
                    return matrix[er][i];
                }
            }er--;
        }
        // string column
        if(sc <= ec){
            for(int i = er; i >= sr; i--){
                count++;
                if(count == k){
                    return matrix[i][sc];
                }
            }sc++;
        }
    }
}
```