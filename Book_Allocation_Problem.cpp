#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){
    int sum = 0;
    int student = 1;
    int i = 0;
    while(i < n){
        if(arr[i] + sum <= mid){
            sum += arr[i];
            i++;
        }
        else{
            student++;
            sum = 0;
            if(student > m){
                return false;
            }
        }

    }
    return true;

}


int findPages(int arr[], int n, int m) {
    int s = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    if(n < m) return -1;
    int ans = 0;
    int e = sum;
    int mid = 0;
    while(s <= e){
        mid = s + (e-s)/2;
        if(isPossible(arr, n , m, mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return ans;
}

int main(){

    int arr[] = {25, 46, 28, 49, 24};
    int ans = findPages(arr, 5, 6);
    cout<<ans;
    
}