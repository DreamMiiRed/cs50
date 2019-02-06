// Given a base- integer, , convert it to binary (base-). Then find and print the base- integer denoting the maximum number of consecutive 's in 's binary representation.

// #include <bits/stdc++.h>

#include <iostream>
#include <algorithm>    // std::max

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int num = n;
    int count = 0; 
    int maxi = 0;
    while (num > 0) {
        count = ++count * (num % 2);
        num >>= 1;
        maxi = max(maxi, count);
    }
    cout << maxi << endl;
    return 0;
}

