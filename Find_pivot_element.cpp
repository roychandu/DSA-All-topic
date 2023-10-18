#include<bits/stdc++.h>
using namespace std;

int Pivot(int arr[], int size){
    int s = 0;
    int e = size - 1;
    int mid = 0;
    while(s < e){
        mid = s + (e-s)/2;
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
    }
    return e;
}

int main(){
    int arr[] = {4, 5, 6, 7, 1, 2, 3};
    int Pivot_Index = Pivot(arr, 7);
    cout<<Pivot_Index; 
}