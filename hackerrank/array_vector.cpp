#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q;
    cin >> n >> q;
    vector<vector<int>> vn;
    vn.resize(n);
    for (int i = 0; i < n; i++) {
        int nn;
        cin >> nn;
        vector<int> a;
        a.resize(nn);
        vn[i] = a;
        for (int j = 0; j < nn; j++) {
            cin >> vn[i][j];
        }
    }
    vector<int> vans;
    vans.resize(q);
    for (int i = 0; i < q; i++) {
        int q1, q2;
        cin >> q1 >> q2;
        vans[i] = vn[q1][q2];
    }
    for (int i = 0; i < q; i++) {
        cout << vans[i] << endl;
    } 
    //for (auto const &element: vn[1])
        //std::cout << element << ' ';
    return 0;
}
