#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
int maxSubarraySum(vector<int>arr){
    int maxi=INT16_MIN;
    int prefix=0 , n=arr.size();
    for(int i=0; i<n; i++){
        prefix+=arr[i];
        maxi=max(maxi,prefix);
        if(prefix<0){
            prefix=0;
        }
    }
    return maxi;
}
};

int main(){
    int t ;
    cin>>t;
    cin.ignore();
    while(t--){
        vector<int>arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while(ss>>num){
            arr.push_back(num);
        }
        Solution sol;
        cout<<sol.maxSubarraySum(arr)<<endl;
    }
}