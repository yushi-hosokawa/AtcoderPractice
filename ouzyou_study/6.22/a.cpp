#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
    int x;
    cin >> x;
    int count = 1;
    int a = x;
    while(a!=0){
        a+=x;
        count++;
        a%=360;
    }
    cout << count << endl;

}
