#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

#include <utility> //std::pair, std::get<0>(foo)
#include <array> //std:array
#include <set>

using namespace std;

int main() {  
    int Q;
    cin >> Q;

    // vector<std::pair<int, int>> v;
    // v.resize(Q);
    // for (std::pair<int, int>& p : v) {
    //     int a, b;
    //     cin >> a >> b;
    //     p = std::make_pair(a, b);
    // }
    // set<int> s;
    // for (std::pair<int, int>& p : v) {
    //     //cout << std::get<0>(p) << ' ' << std::get<1>(p) << endl;
    //     int a = std::get<0>(p);
    //     int b = std::get<1>(p);
    //     if (a == 1) {
    //         s.insert(b);
    //     } else if (a == 2) {
    //         s.erase(b);
    //     } else if (a == 3) {
    //         set<int>::iterator itr = s.find(b);
    //         if (itr == s.end()) {
    //             cout << "No" << endl;
    //         } else {
    //             cout << "Yes" << endl;
    //             //cout << *itr << endl;
    //         }
    //     }
    // }

    vector<std::array<int, 2>> v2;
    v2.resize(Q);
    for (std::array<int, 2>& p2 : v2) {
        int a, b;
        cin >> a >> b;
        p2[0] = a;
        p2[1] = b;
    }
    set<int> s;
    for (std::array<int, 2>& p2 : v2) {
        cout << p2[0] << ' ' << p2[1] << endl;
        int a = p2[0];
        int b = p2[1];
        if (a == 1) {
            s.insert(b);
        } else if (a == 2) {
            s.erase(b);
        } else if (a == 3) {
            set<int>::iterator itr = s.find(b);
            if (itr == s.end()) {
                cout << "No" << endl;
            } else {
                cout << "Yes" << endl;
                //cout << *itr << endl;
            }
        }
    }

    return 0;
}
