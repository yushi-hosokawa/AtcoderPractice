#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const ll mod = 1e9+7;

ll pow(ll a,ll n){ //aのn乗計算 O(log(n))
  if(n == 0)return 1;

  ll res = 1;
  while(n > 0){//nがゼロになるまで
    if(n%2 ==1)res = res * a % mod; //奇数ならa倍してべきを偶数にしている
    a = a * a % mod; //aを自乗
    n /= 2;//aを自乗した分べきを半分減らす
  }
  return res;
}

//フェルマーの小定理より、aで割るという処理はinv(a)をかけることと同じになる
//そのinv(a)はa^(mod-2)で求められる
ll inv(ll a){
  return pow(a,mod-2);
}

ll comb(ll n, ll a){  //nCaの計算
  ll bunbo =1 ,bunshi = 1;
  for(ll i =1;i<=a;++i){
    bunbo = bunbo *i %mod;//
    bunshi = bunshi * (n-i+1) %mod;//
  }
  return bunshi*inv(bunbo) %mod;

}

int main(){
  ll n,a,b;
  cin >>n>>a>>b;


  ll ans = pow(2,n) -comb(n,a) - comb(n,b) -1;
  //modを使ってる引き算は負になった時足さないといけない
  while(ans <0)ans +=mod;

  cout <<ans<<endl;
}
