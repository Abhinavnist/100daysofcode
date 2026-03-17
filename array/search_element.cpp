#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,40,50};
    // int n = INT16_MAX;
    // for (int i = 0; i < sizeof(arr)/sizeof(arr[1]); i++)
    // {
    //     if(arr[i]<n){
    //         n=arr[i];
    //     }
    // }
    // cout<<n;
    //search element
    for (int i = 0; i < 6; i++)
    {
        if(arr[i]==20){
            cout<<"yes present at "+ i <<endl;
        }
    }
    
    
}