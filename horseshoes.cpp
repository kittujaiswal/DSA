#include<iostream>
#include<map>
using namespace std;

int main() {
    int n = 4;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    map<int,int> m;

    for(int i = 0; i < n; i++){
        m[arr[i]]++;
    }

    int ot = 4 - m.size();
    cout<<ot;
}
