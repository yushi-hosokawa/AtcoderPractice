#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int make_ans(ll a,b,n){
  int d =0;
  ll pre=ans;
  while(pre/10>0){
    d+=1;
    pre/=10;
  }
  d+=1;
  ll maxy = a*ans+b*d;
  //cout<<d<<endl;
  return maxy;
}

int main(){
  ll a,b,x;
  cin >>a>>b>>x;
  ll n = 1000000000;
  ll ans = make_ans(a,b,n);
  if(x>ans){
    cout<<n<<endl;
    return 0;
  }
  else {
    n = 500000000;
    ans = make_ans(a,b,n);
    if(x>ans)

  }

}
