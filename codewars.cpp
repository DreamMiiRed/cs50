#include <string>
#include <vector>
#include <iostream>
#include <sstream> //stringstream

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

std::string abbrevName(std::string name)
{
  string res[2];
  stringstream ss(name);
  int i = 0;
  for(string s; ss >> s; )
    res[i++] = toupper(s[0]);
  return res[0] + '.' + res[1];

//   std::string ret;
//   ret.push_back(toupper(name[0]));
//   ret.push_back('.');
//   ret.push_back(toupper(name[name.find(' ') + 1] ));
//   return ret;
}

int main() {
    cout << "digitze" << endl;
    int N = 1234567890L;
    vector<int> vn = digitize(N);
    for(int& i : vn) {
        cout << i << ' ';
    }
    cout << endl;
    cout << "-----------------" << endl;

    cout << "Abbreviate a Two Word Name" << endl;
    cout << abbrevName("John Smith") << endl;
    cout << abbrevName("Paul young") << endl;
    cout << "-----------------" << endl;
}