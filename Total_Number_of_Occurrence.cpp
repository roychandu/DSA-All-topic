#include<bits/stdc++.h>
using namespace std;

int firstOccurrence(vector<int> &arr, int k){
    int s = 0;
    int e = arr.size() - 1;
    int ans = -1;
    int mid = 0;
    while(s <= e){
        mid = s + (e-s)/2;
        if(k == arr[mid]){
            ans = mid;
            e = mid - 1;
        }
        else if(k < arr[mid]) e = mid - 1;
        else s = mid + 1;
    }
    return ans;
}

int secondOccurrence(vector<int>& arr, int k){
    int s = 0;
    int e = arr.size() - 1;
    int ans = -1;
    int mid = 0;
    while(s <= e){
        mid = s + (e-s)/2;
        if(k == arr[mid]){
            ans = mid;
            s = mid + 1;
        }
        else if(k < arr[mid]) e = mid - 1;
        else s = mid + 1;
    }
    return ans;
}
int FirstLastOccurrence(vector<int> &arr, int k){
    int first = firstOccurrence(arr, k);
    int second = secondOccurrence(arr, k);
    int Total_Occurrence = (second - first) + 1;
    return Total_Occurrence;
}



int main(){
    vector<int> arr = {0, 0, 1, 1, 2, 2, 2, 2};
    int Total_ans = FirstLastOccurrence(arr, 2);
    cout<<"There are "<<Total_ans<<" Occurrence are parsent !!";
}