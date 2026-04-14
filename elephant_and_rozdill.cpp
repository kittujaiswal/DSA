#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int min_value = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < min_value) {
            min_value = arr[i];
        }
    }
    int count = 0;
    int index = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == min_value) {
            count++;
            index = i + 1;  
        }
    }
    if(count > 1) {
        cout << "Still Rozdil";
    } else {
        cout << index;
    }

    return 0;
}
