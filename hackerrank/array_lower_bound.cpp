#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int myints[] = {10,20,30,30,20,10,10,20};
    vector<int> v(myints,myints+8);           // 10 20 30 30 20 10 10 20
    sort (v.begin(), v.end());                // 10 10 10 20 20 20 30 30

    vector<int>::iterator low, up;
    low =std::lower_bound (v.begin(), v.end(), 20);
    up= std::upper_bound (v.begin(), v.end(), 20);

    std::cout << "lower_bound at position " << (low - v.begin()) << '\n';
    std::cout << "upper_bound at position " << (up - v.begin()) << '\n';
    // Expected output
    // lower_bound at position 3
    // upper_bound at position 6

    int N;
    cin >> N;
    vector<int> v;
    v.resize(N);
    for(int& i : v) {
        cin >> i;
    }
    int Q;
    cin >> Q;
    vector<int> vq;
    vq.resize(Q);
    for (int& i : vq) {
        cin >> i;
    }
    for (int& i : vq) {
        vector<int>::iterator low;
        low = lower_bound(v.begin(), v.end(), i);
        if (v[low - v.begin()] == i)
           cout << "Yes " << (low - v.begin()+1) << endl;
        else
           cout << "No " << (low - v.begin()+1) << endl;
    }

    
    return 0;
}