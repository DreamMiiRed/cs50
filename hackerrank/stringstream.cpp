#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> va;
    stringstream ss(str);
    char c;
    int i;
    while(ss >> i) {
        va.push_back(i);
        ss >> c;
    }
    // -- or --
    // while(ss) {
    //     ss >> i >> ch;
    //     v.push_back(i);
    // }
    return va;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
