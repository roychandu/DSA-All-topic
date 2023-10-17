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
vector<int> FirstLastOccurrence(vector<int> &arr, int k){
    int first = firstOccurrence(arr, k);
    int second = secondOccurrence(arr, k);
    vector<int> ans;
    ans.push_back(first);
    ans.push_back(second);
    return ans;
}

void PritnArr(vector<int> &arr){
    for(auto it : arr){
        cout<<it<<" ";
    }
}

int main(){
    vector<int> arr = {0, 0, 1, 1, 2, 2, 2, 2};
    vector<int> ans = FirstLastOccurrence(arr, 2);
    PritnArr(ans);
}