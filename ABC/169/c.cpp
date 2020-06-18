#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
    ll a;cin>>a;
    string b;cin>>b;
    ll b100 = (b[0]-'0')*100+(b[2]-'0')*10+(b[3]-'0');
    ll ans = a*b100/100;
    cout<<ans<<endl;

}
