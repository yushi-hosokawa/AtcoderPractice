#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
    ll a,b,v,w,t;

    cin>>a>>v;
    cin>>b>>w;
    cin>>t;
    ll dis = abs(b-a);
    ll x = v-w;
    ll dismax = x*t;
    if(dismax>=dis){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }

}
