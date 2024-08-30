## Problem Statement

Geek just learned about Fibonacci numbers.
The Fibonacci Sequence is the series of numbers: 0, 1, 1, 2, 3, 5, 8, 13, ...
where the next number is found by adding up the two numbers before it.
He defines a new series called Geeky numbers. Here the next number is the sum of the K preceding numbers.
You are given an array of size K, GeekNum[], where the ith element of the array represents the ith Geeky number. Return its Nth term.
Note: This problem can be solved in O(N^2) time complexity but the user has to solve this in O(N). The constraints are less because there can be integer overflow in the terms.

### for better understading
- Problem link: [Is it Fibonacci](https://www.geeksforgeeks.org/problems/is-it-fibonacci--170647/1?page=1&category=sliding-window&status=solved&sortBy=difficulty)

### C++ Solution

```cpp
#include<bits/stdc++.h>
using namespace std;

long long solve(int N, int K, vector<long long> GeekNum) {
        long long size = GeekNum.size();
        long long sum = 0;
        if(K == size){
            for(int i = 0; i < size; i++){
                sum += GeekNum[i];
            }
        }else{
            for(int i = size - K + 1; i < size; i++){
                sum += GeekNum[i];
            }
        }
        for(int i = size; i < N; i++){
            GeekNum.push_back(sum);
            sum += sum;
            sum -= GeekNum[i - K];
        }
        return GeekNum[N-1];
}
```