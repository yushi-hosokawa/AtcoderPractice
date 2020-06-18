#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
    double n;cin>>n;
    string r;cin>>r;
    double total = 0;
    map<char, double >mp;
    mp['A'] = 4.0;
    mp['B'] = 3.0;
    mp['C'] = 2.0;
    mp['D'] = 1.0;
    mp['F'] = 0;

    rep(i,n){
        char x = r[i];
        total+=mp[x];
    }


    double ans = total/n;
    cout<<setprecision(15)<<ans<<endl;

}
