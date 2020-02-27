#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  ll n ;
  ll k ;
  cin >>n>>k;
  vector<ll> a(n);
  rep(i,n)cin>>a.at(i);
  sort(a.begin(),a.end());
  int roop = 0;
  int checker = 0;
  for(int i =n-1;i>0;--i){

    checker+=i;
    if(k<=checker){
      ll x =a.at(roop);
      ll y = a.at(roop + (i- (checker-k)));
      cout <<x*y<<endl;
      break;
    }
    ++roop;
  }

}
