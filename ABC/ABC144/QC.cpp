#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  ll n;
  cin >>n;
  ll ans =0;
  if(n%2==0){
    ans= n/2;
  }
  else {
    ans =n-1;
  }
  ll sqrtans =sqrt(n);

  for(ll i=sqrtans;i>2;--i){
    if(n%i==0){
      ans=i+(n/i)-2;
      break;
    }
  }
  cout <<ans<<endl;

}
