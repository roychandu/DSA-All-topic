#include<bits/stdc++.h>
using namespace std;

int PivotIndex(int arr[], int s){
    int start = 0;
    int end = s - 1;
    int mid = 0;
    while(start < end){
        mid = start + (end-start)/2;
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return end;
}


int BinarySearch(int arr[], int start, int end, int k){
    int mid = 0;
    while(start <= end){
        mid = start + (end-start)/2;
        if(k == arr[mid]) return mid;
        else if(k < arr[mid]) end = mid - 1;
        else start = mid + 1;
    }
    return -1;
}

int RotatedArr(int arr[], int s, int k){
    int start = 0;
    int end = s - 1;
    int Pivot = PivotIndex(arr, s);
    // 1st line
    if(arr[start] <= k && k <= arr[Pivot-1]){
        return BinarySearch(arr, 0, Pivot-1, k);
    }
    else{ // 2nd line
        return BinarySearch(arr, Pivot, end, k);
    }    
}



int main(){
    int arr[] = {10, 11, 14, 4, 5, 6, 7, 8, 9};
    int ans = RotatedArr(arr, 8, 7);
    cout<<ans;
}