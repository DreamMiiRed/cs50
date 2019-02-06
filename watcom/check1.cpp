#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

void print(const int& n) { 
    std::cout << n << ' '; 
};
 

int main() {
  
    int myints[] = {10,20,30,30,20,10,10,20};
    vector<int> v(myints,myints+8);           // 10 20 30 30 20 10 10 20
    sort(v.begin(), v.end());                // 10 10 10 20 20 20 30 30

    // vector<int>::iterator low,up;
    // low = std::lower_bound (v.begin(), v.end(), 20);
    // up = std::upper_bound (v.begin(), v.end(), 20);

    // cout << "lower_bound at position " << (low - v.begin()) << '\n';
    // cout << "upper_bound at position " << (up - v.begin()) << '\n';

    
    std::for_each(v.begin(), v.end(), print);
    cout << endl;

    std::reverse(v.begin(),v.end()); 
    std::for_each(v.begin(), v.end(), print);
    cout << endl;
    return 0;
}
