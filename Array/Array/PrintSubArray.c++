#include<bits/stdc++.h>
using namespace std;

    void printSubArr(vector<int>&arr)
    {
        int n=arr.size();
        for(int size=1; size<=n; size++)
        {
            for(int start=0; start<=n-size;start++)
            {
                for(int i=start;i<start+size;i++)
                {
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
            }
        }
    }

int main(){
    int t; 
    cout<<"Enter the Array size: ";
    cin>>t;
    vector<int>arr(t);
    cout<<"Enter the elements of Array: "<<endl;
    for(int i=0; i<t; i++){
        cin>>arr[i];
    }
    cout<<"The all possible Sub-Array are: "<<endl;
    printSubArr(arr);
    return 0;
}