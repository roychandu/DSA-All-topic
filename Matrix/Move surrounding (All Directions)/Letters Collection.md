## Problem Statement

The Postmaster wants to write a program to answer the queries regarding letter collection in a city. A city is represented as a matrix mat of size n*m. Each cell represents a house and contains letters which are denoted by a number in the cell. The program should answer q queries which are of following types:
- 1 i j : To sum all the letters which are at a 1-hop distance from the cell (i,j) in any direction
- 2 i j : To sum all the letters which are at a 2-hop distance from the cell (i,j) in any direction.

The queries are given in a 2D matrix queries[][].

In one hop distance postmaster can go to any of [(i-1,j-1), (i-1,j), (i-1,j+1), (i,j-1), (i,j+1), (i+1,j-1), (i+1,j), (i+1,j+1)] from (i,j). 

### for better understading
- Problem link : [Letters Collection](https://www.geeksforgeeks.org/problems/c-letters-collection4552/1?page=2&category=Matrix&status=solved&sortBy=submissions)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[]){
    vector<int> ans;
    int dx_hop1[] = {-1, -1, 0, 1, 1, 1, 0 ,-1};
    int dy_hop1[] = {0, 1, 1, 1, 0,-1, -1, -1};
    int dx_hop2[] = {-2,-2,-2,-1,0,1,2,2,2,2,2,1,0,-1,-2,-2};
    int dy_hop2[] = {0,1,2,2,2,2,2,1,0,-1,-2,-2,-2,-2,-2,-1};
    
    for(int i = 0; i < q; i++){
        int hop = queries[i][0];
        int row = queries[i][1];
        int col = queries[i][2];
        
        int sum = 0;
        if(hop == 1){
            for(int i = 0; i < 8; i++){
                int x = row + dx_hop1[i];
                int y = col + dy_hop1[i];
                if(x >= 0  && x < n && y >= 0 && y < m){
                    sum += mat[x][y];
                }
            }
        }
        else{
            for(int i = 0; i < 16; i++){
                int x = row + dx_hop2[i];
                int y = col + dy_hop2[i];
                if(x >= 0  && x < n && y >= 0 && y < m){
                    sum += mat[x][y];
                }
            }
        }
        ans.push_back(sum);
    }
    return ans;
}
```