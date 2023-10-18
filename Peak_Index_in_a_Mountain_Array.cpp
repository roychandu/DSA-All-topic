#include<bits/stdc++.h>
using namespace std;

int Mountain(int arr[], int size){
    int s = 0;
    int e = size - 1;
    int mid = 0;
    while(s < e){
        mid = s + (e-s)/2;
        if(arr[mid] < arr[mid + 1]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
    }
    return e;
}

int main(){
    int arr[] = {0, 10, 5, 2};
    int Mountain_Index = Mountain(arr, 5);
    cout<<Mountain_Index; 
}