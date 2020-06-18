#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;



int main() {
    {
        int n;
        cin >> n;

        if (n % 10 == 3) {
            cout << "bon" << endl;
        } else if (n % 10 == 0 || n % 10 == 1 || n % 10 == 6 || n % 10 == 8) {
            cout << "pon" << endl;
        } else {
            cout << "hon" << endl;
        }


    }
}