#include<bits/stdc++.h>
using namespace std;

int SqurRoot(int n){
    int s = 0;
    int e = n - 1;
    long long mid = 0;
    int ans = 0;
    if(n == 1) return n;
    while(s <= e){
        mid = s + (e - s)/2;
        if(mid*mid == n){
            return mid;
        }
        else if(mid*mid <= n){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int ans = SqurRoot(n);
    cout<<ans;
}