#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int swaps = 0;
    int maxIndex = 0;
    for(int i = 1; i < n; i++) {
        if(arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    while(maxIndex > 0) {
        swap(arr[maxIndex], arr[maxIndex - 1]);
        maxIndex--;
        swaps++;
    }
    int minIndex = 0;
    for(int i = 1; i < n; i++) {
        if(arr[i] <= arr[minIndex]) {   
            minIndex = i;
        }
    }
    while(minIndex < n - 1) {
        swap(arr[minIndex], arr[minIndex + 1]);
        minIndex++;
        swaps++;
    }
    cout << swaps;
}
