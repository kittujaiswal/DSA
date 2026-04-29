#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> prog, math, pe;

    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;

        if(x == 1) prog.push_back(i);
        else if(x == 2) math.push_back(i);
        else if(x == 3) pe.push_back(i);
    }

    int w = min(prog.size(), min(math.size(), pe.size()));

    cout << w << endl;

    for(int i = 0; i < w; i++){
        cout << prog[i] << " "
             << math[i] << " "
             << pe[i] << endl;
    }
}
