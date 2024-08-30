## Problem Statement

You are given an integer array cardPoints[], where each element represents the points associated with a card. The cards are arranged in a row. In one step, you can take one card either from the beginning or the end of the row. You must take exactly k cards. Your goal is to maximize the total score from the cards you take.

Given the array cardPoints[], and the integer k, return the maximum score you can obtain.

### for better understading
- Problem link : [Maximum point you can obtain from cards](https://www.geeksforgeeks.org/problems/maximum-point-you-can-obtain-from-cards/1?page=1&category=sliding-window&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

long long maxScore(vector<int> &cardPoints, int N, int k) {
        long long sum = 0;
        for(int i = 0; i < k; i++){
            sum += cardPoints[i];
        }
        long long maxi = sum;
        int i = k-1;
        int j = N-1;
        while(i >= 0){
            sum -= cardPoints[i--];
            sum += cardPoints[j--];
            maxi = max(maxi, sum);
        }
        return maxi;
}
```