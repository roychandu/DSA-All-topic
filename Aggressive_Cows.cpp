#include<bits/stdc++.h>
using namespace std;

bool check(int x, int k, vector<int>& stalls){
    int window = 1;
    int valueofwindow = stalls[0];
    for(int i = 1; i < stalls.size(); i++){
        if(stalls[i] - valueofwindow >= x){
            window++;
            if(window == k){
                return true;
            }
            valueofwindow = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int s = 0;
    int sum = 0;
    for(int i = 0; i < stalls.size(); i++){
        sum += stalls[i];
    } 
    int e = sum;
    int mid = 0;
    int pos = 0;
    while(s <= e){
        mid = s + (e-s)/2;
        if(check(mid, k, stalls)){
            s = mid + 1;
            pos = mid;
        }
        else{
            e = mid - 1;
        }
    }
    return pos;
}

int main(){
    vector<int> stalls = {0, 3, 4, 7, 10, 9};
    int ans = aggressiveCows(stalls, 4);
    cout<<ans;

}