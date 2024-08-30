#include<bits/stdc++.h>
using namespace std;

bool BinarySearch(int arr[], int size, int k){
    int s = 0;
    int e = size - 1;
    int mid = 0;
    while(s <= e){
        mid = s + (e-s)/2;
        if(k == arr[mid]) return 1;
        else if(k < arr[mid]) e = mid - 1;
        else s = mid + 1;
    }
    return 0;
}

int main(){
    int arr[] = {2};
    bool check = BinarySearch(arr, 1, 2);
    if(check){
        cout<<"Is parsent!!";
    }
    else{
        cout<<"Is not Parsent!!";
    }
}