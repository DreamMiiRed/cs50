#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

std::vector<int> digitize(unsigned long n) 
{
    string s;
    // s = to_string(n);
    // or
    stringstream ss;
    ss << n;
    s = ss.str();
    int c = s.size();
    vector<int> v;
    for (int i = c - 1; i >= 0; i--) {
        int in = s[i] - 48; // or int in = s[i] - '0';
        v.push_back(in);
    }
    return v;

//----------------------------------------
    // std::vector <int> num;
    // while(n!=0){
    //     num.push_back(n%10);//fetch the LSB of the number
    //     n = n / 10;//right shift the number
    // }
    // return num;
//----------------------------------------    
}

int main() {
    int N = 1234567890L;
    vector<int> vn = digitize(N);
    for(int& i : vn) {
        cout << i << ' ';
    }
    cout << endl;
}