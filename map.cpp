// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     map<int,string> student;
// // insert
// student[5] = "Aman";
// student.insert({2,"ABC"});
// student.insert({4,"Aditya"});
// student[10] = "Aditi";
// // Access values of array
// cout<<student[10] << endl;
// // check if the element exist
// if (student.find(4)!=student.end()){
// cout<<"Found" <<endl;
// }
// // traverse the map
// for(auto &x : student){
//     cout<<x.first<<"-->"<<x.second<<endl;
// }
// }
// WAP which will print frequency of all the characters in a given string
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     map<char,int> freq;
// string s;
// cin>>s;
// for(int i = 0;i<s.size() ; i++){
//     freq[s[i]]++;
// }
// for(auto &x :freq){
//     cout<<x.first<<"-->"<<x.second<<endl;
// }
// }
// WAP which will print max frequency of a characters in a given string
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     map<char,int> freq;
// string s;
// cin>>s;
// for(int i = 0;i<s.size() ; i++){
//     freq[s[i]]++;
// }
// int maximum = 0;
//     char maxChar;
//     for (auto &x : freq) {
//         if (x.second > maximum) {
//             maximum = x.second;
//             maxChar = x.first;
//         }
//     }

//     cout << "Character with max frequency: " << maxChar << endl;
//     cout << "Maximum frequency: " << maximum << endl;
// }
// WAP which will take two arrays as input from user and check if two arrays are same or not
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     map<int,int> freq1;
//     map<int,int> freq2;
// int arr1[5] = {1,2,2,3,5};
// int arr2[5] = {1,3,2,2,5};
// for(int i = 0;i<5 ; i++){
//     freq1[arr1[i]]++;
//     freq2[arr2[i]]++;
// }
// if (freq1 == freq2) {
//         cout << "Arrays are the same." << endl;
//     } else {
//         cout << "Arrays are NOT the same." << endl;
//     }
// }
// WAP which will find first non repeating character of a given string
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     map<char,int> freq;
// string s;
// cin>>s;
// for(int i = 0;i<s.size() ; i++){
//     freq[s[i]]++;
// }
// int maximum = 1;
//     for (int i = 0;i<s.size() ; i++) {
//         if (freq[s[i]] == maximum) {
//             cout <<"Character with min frequency: "<< s[i];
//             break;
//         }
//     }
    
// }
// removing duplicates
#include<iostream>
#include<map>
using namespace std;
int main(){
    map<char,int> freq;
string result = "";
string s;
cin>>s;
for(char c: s){
    if(freq[c]==0){
    result += c;
    freq[c]=1;
}
}
cout << result;
}