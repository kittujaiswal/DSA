#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    string team1 = arr[0];
    string team2;
    int count = 1;   
    int count1 = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] == team1)
            count++;
        else {
            team2 = arr[i];
            count1++;
        }
    }

    if (count > count1)
        cout << team1;
    else
        cout << team2;

    return 0;
}
