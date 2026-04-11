// #include<iostream>
// using namespace std;
// int rain_trap(int arr[],int n){
//     int left_max[n];
//     int right_max[n];
//     left_max[0] = arr[0];
// for(int i = 1;i<n;i++){
//     left_max[i]= max(left_max[i-1],arr[i]);
// }
// right_max[n-1] = arr[n-1];
// for(int i = n-1;i>2;i--){
// right_max[i] = max(arr[i],right_max[i+1]);
// }
// int ans = 0;
// int ans = 0;
// for(int i = 0;i<= n-1;i++){
//     ans += min(left_max[i],right_max[i]-arr[i]);
// }
// return ans;
// }
// int main(){
//     int arr[6] = {3,5,2,1,7,8};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     rain_trap(arr,n);
//     cout <<"total rain water stored is "<<rain_trap
// }

//WAP which will take two sorted as input from user and construct another sorted array having all prevoius 
// elements of arrays
// #include<iostream>
// using namespace std;
// void sorted_array(int arr1[],int arr2[],int n, int m){
//         int arr3[ n + m ];
//         int i = 0,j = 0,k = 0;
//     while(i<n && j < m){
//         if(arr1[i] < arr2[j]){
//             arr3[k] = arr1[i];
//             i++;
//             k++;
//         }else{
//             arr3[k] = arr2[j];
//             j++;
//             k++;
//         }
//     }
//     for (;i<n;i++){
//         arr3[k] = arr1[i];
//         k++;
//     }
//     for (;j<m;j++){
//         arr3[k] = arr2[j];
//         k++;
//     }cout << "Merged Sorted Array: ";
//     for (int x = 0; x < n + m; x++)
//         cout << arr3[x] << " ";
//     cout << endl;
// }
// int main(){
// int arr1[9] = {1,4,5,6,7,23,35,46,78};
// int arr2[5] = {6,8,11,19,25};
// int n = sizeof(arr1)/sizeof(arr1[0]);
// int m = sizeof(arr2)/sizeof(arr2[0]);
// sorted_array(arr1,arr2,n,m);
// }
// WAP which will move all the zeroes at the end of the array while maintaining relative order of 
// non zero elements
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[10] = {1, 3, 5, 7, 0, 9, 0, 10, 8, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int j = 0;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] != 0) {
//             swap(arr[i], arr[j]);
//             j++;
//         }
//     }
//     cout << "Array after moving zeros to the end: ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;

//     return 0;
// }
// // WAP to remove all the duplicate elements of the given array
// #include<iostream>
// using namespace std;

// int main() {
//     int arr[10] = {1,3,3,3,5,6,7,8,9,2};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int k = 0;
//     for(int i = 0; i < n; i++) {
//         bool duplicate = false;
//         for(int j = 0; j < k; j++) {
//             if(arr[i] == arr[j]) {
//                 duplicate = true;
//                 break;
//             }
//         }
//         if(!duplicate) {
//             arr[k] = arr[i]; 
//             k++;
//         }
//     }
//     cout << "Array after removing duplicates: ";
//     for(int i = 0; i < k; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }
// WAP which will find minimum average sub-array of size k
// #include<iostream>
// using namespace std;
// int min_avg_subarray(int arr[],int n,int k){
//     int curr_sum = 0;
//     for(int i =0;i<k;i++){
//         curr_sum += arr[i];
//     }
//     float sum = curr_sum;
//     for(int i= k;i<n;i++){
//         curr_sum += arr[i];
//         curr_sum -= arr[i-k];
//         if(curr_sum<sum){
//             sum = curr_sum;
//         }
//     }
//     return sum/k;
// }

// int main(){
//     int arr[7] = {3,5,7,2,8,4,3};
//     int k = 4;
//     int n = sizeof(arr)/sizeof(arr[0]);
//     cout << "minimum average subarray : "<<min_avg_subarray(arr,n,k);
// }
//WAP which will find 2 numbress that will sum of given target in a sorted array try it in a single loop
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[8] = {3,5,7,9,10,12,13,15};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int targ = 19; 
//     int i = 0;
//     int k = n-1;
//     while(i<k){
//         int val = arr[i]+arr[k];
//         if(val<targ){
//             i++;
//         }else if(val>targ) {
//             k--;
//         }else if(val==targ) {
//             cout << "Pair found: " << arr[i] << " and " << arr[k] << endl;
//             break;;
//         }
//     }
// }
// given sorted array find the pair with minimum absolute difference.
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[7] = {2, 3, 5, 7, 9, 10, 12};
//     int n = 7;
//     int minDiff = 1000000; 
//     int first = 0, second = 0;
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             int diff;
//             if (arr[i] > arr[j]) 
//                 diff = arr[i] - arr[j];
//             else
//                 diff = arr[j] - arr[i];
//             if (diff < minDiff) {
//                 minDiff = diff;
//                 first = arr[i];
//                 second = arr[j];
//             }
//         }
//     }
//     cout << "Pair with minimum absolute difference: ("
//          << first << ", " << second << ")" << endl;
//     cout << "Minimum Absolute Difference: " << minDiff << endl;
//     return 0;
// }
// count the number of subarray of size k having sum greater than a given value x
// #include<iostream>
// using namespace std;
// int count_of_subarray_sum_greater_than_x(int arr[], int n, int k, int x) {
//     int curr_sum = 0;
//     int count = 0;
//     for(int i = 0; i < k; i++) {
//         curr_sum += arr[i];
//     }
//     if(curr_sum > x) count++;
//     for(int i = k; i < n; i++) {
//         curr_sum += arr[i] - arr[i - k]; 
//         if(curr_sum > x) count++;
//     }

//     return count;
// }

// int main() {
//     int arr[7] = {3,5,7,2,8,4,3};
//     int k = 4;
//     int x = 12;
//     int n = sizeof(arr)/sizeof(arr[0]);
//     cout << "Number of subarrays of size " << k << " with sum greater than " << x << " : "
//          << count_of_subarray_sum_greater_than_x(arr, n, k, x);
// }
// Given a binary array find the maximum number of consecutive ones
// #include <iostream>
// using namespace std;
// int maxConsecutiveOnes(int arr[], int n) {
//     int maxCount = 0;
//     int count = 0;
//     for(int i = 0; i < n; i++) {
//         if(arr[i] == 1) {
//             count++; 
//             if(count > maxCount) maxCount = count; 
//         } else {
//             count = 0; 
//         }
//     }
//     return maxCount;
// }
// int main() {
//     int arr[] = {1, 1, 0, 1, 1, 1, 0, 1};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     cout << "Maximum consecutive ones: " << maxConsecutiveOnes(arr, n);
// }

// find the closed pair from two sorted array whose sum is closest to x
// #include <iostream>
// #include <cmath> 
// using namespace std;
// int main() {
//     int arr1[] = {1, 4, 5, 7};
//     int arr2[] = {10, 20, 30, 40};
//     int n1 = sizeof(arr1)/sizeof(arr1[0]);
//     int n2 = sizeof(arr2)/sizeof(arr2[0]);
//     int x = 32;
//     int closestSum = arr1[0] + arr2[0]; 
//     int minDiff = abs(closestSum - x);
//     int pair1 = arr1[0], pair2 = arr2[0];
//     for(int i = 0; i < n1; i++) {
//         for(int j = 0; j < n2; j++) {
//             int sum = arr1[i] + arr2[j];
//             int diff = abs(sum - x);
//             if(diff < minDiff) {
//                 minDiff = diff;
//                 closestSum = sum;
//                 pair1 = arr1[i];
//                 pair2 = arr2[j];
//             }
//         }
//     }
//     cout << "Pair with sum closest to " << x << " is: (" << pair1 << ", " << pair2 << ")" << endl;
//     return 0;
// }
// // WAP to find the maximum sum of subarray having both positive and negative elements
// #include<iostream>
// using namespace std;
// int max_subarray_sum(int arr[],int n){
//     int max = 0;
//     int curr_sum =0;
//     for(int i = 0;i < n; i++){
//       curr_sum+=arr[i];
//       if(max < curr_sum ){
//         max = curr_sum;
//      }
//      if(curr_sum < 0){
//         curr_sum = 0;
//         }
// }
// return max;
// }
// int main(){
//     int arr[7] = {2,3,-8,7,-1,2,3};
//     int n = 7;
//     cout<< "maximum subarray sum is " << max_subarray_sum(arr,n);
// }
// WAP to find the smallest positive missing number of an array
// #include<iostream>
// #include<cmath> 
// using namespace std;
// int min_missing_no(int arr[], int n) {

//     for(int i = 0; i < n; i++) {
//         if(arr[i] <= 0)
//             arr[i] = n + 1;
//     }
//     for(int i = 0; i < n; i++) {
//         int val = abs(arr[i]);
//         if(val >= 1 && val <= n) {
//             if(arr[val - 1] > 0)  
//                 arr[val - 1] = -arr[val - 1];
//         }
//     }
//     for(int i = 0; i < n; i++) {
//         if(arr[i] > 0)
//             return i + 1;  
//     }
//     return n + 1;
// }

// int main() {
//     int arr[] = {0, -1, 3, 1, 1, 2, 5, 7};  
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Minimum missing positive number is " << min_missing_no(arr, n);
//     return 0;
// }
