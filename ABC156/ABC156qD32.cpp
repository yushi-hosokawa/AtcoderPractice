#include <iostream.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const ll MOD = 1000000007;


//関数名をpowにするとstd::powが呼ばれておかしくなっちゃう?
//https://cpprefjp.github.io/reference/cmath/pow.html

ll pow(ll a,ll n){ //aのn乗計算 O(log(n))
  if(n == 0)return 1;

  ll res = 1;
  while(n > 0){//nがゼロになるまで
    if(n%2 ==1)res = res * a % MOD; //奇数ならa倍してべきを偶数にしている
    a = a * a % MOD; //aを自乗
    n /= 2;//aを自乗した分べきを半分減らす
  }
  return res;
}



//フェルマーの小定理より、aで割るという処理はinv(a)をかけることと同じになる
//そのinv(a)はa^(MOD-2)で求められる
ll inv(ll a){
  return pow(a,MOD-2);
}


ll comb(ll n, ll a){  //nCaの計算
  ll bunbo =1 ,bunshi = 1;

  for(ll i =1;i<=a;++i){
    bunbo = bunbo *i %MOD;//
    bunshi = bunshi * (n-i+1) %MOD;//
  }
  return bunshi*inv(bunbo) %MOD;

}


int main(){
  ll N,A,B;
  cin >>N>>A>>B;
//  cout<<comb(N,A)<<" : " <<comb(N,B)<<endl;
//  cout <<power(2,N)<<endl;

  ll ans = pow(2,N) -comb(N,A) - comb(N,B) -1;
  //MODを使ってる引き算は負になった時足さないといけない
  while(ans <0)ans +=MOD;

  cout <<ans<<endl;
}
