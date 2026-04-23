#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> drinks(n);
    for(int i = 0; i < n; i++){
        cin >> drinks[i];
    }

    sort(drinks.begin(), drinks.end());
    int days;
    cin >> days;
    while(days--){
        int money;
        cin >> money;
        int count = upper_bound(drinks.begin(), drinks.end(), money) - drinks.begin();
        cout << count << endl;
    }

    return 0;
}