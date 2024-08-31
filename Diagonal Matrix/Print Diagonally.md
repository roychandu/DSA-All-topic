## Problem Statement

Give a N * N square matrix A, return all the elements of its anti-diagonals from top to bottom.

### for better understading
- Problem link : [Print Diagonally](https://www.geeksforgeeks.org/problems/print-diagonally4331/1?page=1&category=Matrix&status=solved&sortBy=submissions)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

vector<int> downwardDiagonal(int N, vector<vector<int>> A){
	vector<int> res;
	for(int j = 0; j < N; j++){
	    int row = 0;
	    int col = j;
	    while(row < N && col >= 0){
	        res.push_back(A[row][col]);
	        row++;
	        col--;
	    }
	}
	for(int j = 1; j < N; j++){
	    int row = j;
	    int col = N-1;
	    while(row < N && col >= 0){
	        res.push_back(A[row][col]);
	        row++;
	        col--;
	    }
	}
	return res;
}
```