## Problem Statement

Given a boolean 2D array, where each row is sorted. Find the row with the maximum number of 1s.

### for better understading
- Problem link : [Maximum no of 1's row](https://www.geeksforgeeks.org/problems/maximum-no-of-1s-row3027/1?page=1&category=Matrix&status=solved&sortBy=submissions)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

int maxOnes (vector <vector <int>> &Mat, int N, int M){
   int i = 0;
   int j = M-1;
   int index = 0;
   while(i < N && j >= 0){
       if(Mat[i][j] == 1){
           j--;
           index = i;
       }
       else{
           i++;
       }
   }
   return index;
}
```