#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    int *A = new int[N];
    int i = 0;
    while(cin>>A[i++] && (i < N));
    while(cout<<A[--N]<<' ' && N);
    delete[] A;
    return 0;
}
