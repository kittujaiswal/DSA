#include<iostream>
using namespace std;
int main(){
    int n ,k ;
    int count = 0;
    cin >>n >> k;
     int arr[n];
     for(int i =0;i<n;i++){
        cin >>arr[i];
     }
     int element = arr[k-1];
     for(int i =0;i<n ; i++){
        if(arr[i]>=element && arr[i]>0){
            count++;
        }
     }
   cout << count;
}