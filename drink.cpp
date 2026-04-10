#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    float sum=0;
    float arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        sum+=arr[i];
    }
    double ot = sum/n;
    cout<<ot;
}