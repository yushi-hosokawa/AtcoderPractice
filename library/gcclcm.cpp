#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

//ABC148C問題
//最小公倍数及び最大公約数を出す関数
//そこらへんのサイトに乗ってた

ll gcd(ll a,ll b){
  if (a%b == 0)return(b);
  else return(gcd(b,a%b));
}

ll lcm(ll a,ll b){
  return a*b/gcd(a,b);
}


int main(){
  ll a,b;
  cin >>a>>b;
  ll ans = lcm(a,b);
  cout <<lcm(a,b)<<endl;

}
