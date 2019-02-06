#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    map<string, string> mp;
    for (int i = 0; i < n; i++) {
        string s1, s2;
        cin >> s1 >> s2;
        mp.insert(pair<string, string>(s1, s2));
    }
    string s = "";
    map<string,string>::iterator it;
    // do {
    //     cin >> s;
    //     if (!s.empty()) {
    //         it = mp.find(s);
    //         if (it != mp.end()) {
    //             cout << it->first << "=" << it->second << endl;
    //         } else {
    //             cout << "Not found" << endl;
    //         }
    //     }
    // } while(!s.empty());
    while(cin >> s) {
        if (!s.empty()) {
            it = mp.find(s);
            if (it != mp.end()) {
                cout << it->first << "=" << it->second << endl;
            } else {
                cout << "Not found" << endl;
            }
        }
    }
    return 0;
}
