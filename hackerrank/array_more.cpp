//#include <cmath>
//#include <cstdio>
//#include <vector>
#include <iostream>
//#include <algorithm>
using namespace std;

void more() {
    int N,i=0;
    cin>>N;
    int *A = new int[N];
    while(cin>>A[i++] && (i < N));
    while(std::cout<<A[--N]<<' ' && N);
    delete[] A;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int len;
    cin >> len;
    int *a = new int[len];
    for (int i = 0; i < len; i++) {
        cin >> a[i];
    }
    cout << sizeof(a) << endl;
    for (int j = len - 1; j >= 0; j--) {
        cout << a[j];
        if (j == 0) { cout << endl; } else { cout << " "; }
    }
    delete[] a;

    more();

    return 0;
}


