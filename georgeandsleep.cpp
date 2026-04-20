#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int sh = stoi(s.substr(0, 2));
    int sm = stoi(s.substr(3, 2));
    int th = stoi(t.substr(0, 2));
    int tm = stoi(t.substr(3, 2));
    int current = sh * 60 + sm;
    int sleep = th * 60 + tm;
    int bed = current - sleep;
    if (bed < 0)
        bed += 24 * 60;
    int bh = bed / 60;
    int bm = bed % 60;
   if (bh < 10) cout << "0";
    cout << bh << ":";
    if (bm < 10) cout << "0";
    cout << bm << endl;
    return 0;
}