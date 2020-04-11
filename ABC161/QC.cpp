#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  ll n,k;
  cin>>n>>k;
  if(n<k){
    ll ans=min(n,abs(n-k));
    cout<<ans<<endl;
    return 0;
  }
  if(n==k){
    cout<<0<<endl;
    return 0;
  }
  else{
    ll x =n/k;
    ll ansa = n-(x*k);
    ll ansb = abs(n-((x+1)*k));
    ll ansmin =min(ansa,ansb);
    cout<<ansmin<<endl;
    return 0;
  }
}
