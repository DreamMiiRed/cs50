#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

int myints[] = {10,20,30,30,20,10,10,20};
std::vector<int> v(myints,myints+8);           // 10 20 30 30 20 10 10 20

std::sort (v.begin(), v.end());                // 10 10 10 20 20 20 30 30

for (int i = 0; i < v.size(); i++) {
    cout << v[i] << ' ';
}
cout << endl;
// std::vector<int>::iterator low,up;
// low=std::lower_bound (v.begin(), v.end(), 20);
// up= std::upper_bound (v.begin(), v.end(), 20);

// std::cout << "lower_bound at position " << (low- v.begin()) << '\n';
// std::cout << "upper_bound at position " << (up - v.begin()) << '\n';


    return 0;
}