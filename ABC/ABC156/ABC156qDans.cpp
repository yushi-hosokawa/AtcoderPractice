#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


//花の全パターンを求めると2^nのパターン数になって計算間に合わないから繰り返し2乗法をやる
//

//xのn乗を求める関数
//今回は花の使う、使わないの全パターンである2^nを考えるため x=2, n =n（花の数）で考える
ll pow(ll x,ll n){
  if(n == 0 ) return 1 ;//0乗なら1
  ll y = pow(x,n/2);
  y *= y; //f(N) =f(N/2)^2のに置き換えることが可能。これを再起的に繰り返す
  if(n%2 == 1)y *= x; //nが奇数のときはn倍する
  return y;
}

int choose(ll n , ll a){
  ll mod =1000000009;
  ll x =1 ;//分子
  ll y = 1;//分母
  rep(i,a){
    x *= n-i;
    y *=i+1;
  }
  cout<<"x ="<<x<<" y ="<<y<<endl;
  ll inv = pow(y,mod-2) % mod;
  cout <<"inv ="<<inv<<endl;

  return (x*inv)%2;

}

int main(){
  ll n,a,b;
  cin >>n>>a>>b;
  vector <int> x(n);

  //今回求める式は 2^n - 1 - nCa - nCb
  ll ans = pow (2,n);
  cout <<ans<<endl;
  ans -= 1;
  cout <<ans<<endl;
  ans -= choose(n,a);
  cout <<ans<<endl;
  ans -= choose(n,b);
  cout <<ans<<endl;

  cout <<ans<<endl;




  return 0;
}
