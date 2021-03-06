#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;
struct mint {
  const int mod = 1000000007;
  struct mint {
    ll x; // typedef long long ll;
    mint(ll x=0):x((x%mod+mod)%mod){}
    mint operator-() const { return mint(-x);}
    mint& operator+=(const mint a) {
      if ((x += a.x) >= mod) x -= mod;
      return *this;
    }
    mint& operator-=(const mint a) {
      if ((x += mod-a.x) >= mod) x -= mod;
      return *this;
    }
    mint& operator*=(const mint a) {
      (x *= a.x) %= mod;
      return *this;
    }
    mint operator+(const mint a) const {
      mint res(*this);
      return res+=a;
    }
    mint operator-(const mint a) const {
      mint res(*this);
      return res-=a;
    }
    mint operator*(const mint a) const {
      mint res(*this);
      return res*=a;
    }
    mint power(ll t) const {
      if (!t) return 1;
      mint a = power(t>>1);
      a *= a;
      if (t&1) a *= *this;
      return a;
    }

    // for prime mod
    mint inv() const {
      return power(mod-2);
    }
    mint& operator/=(const mint a) {
      return (*this) *= a.inv();
    }
    mint operator/(const mint a) const {
      mint res(*this);
      return res/=a;
    }
  };

mint choose(int n , int a){

  mint x =1 , y =1;//分母,分子
  rep(i,a){
    x *= n-i;//分子を(n*n-1*...n-(a-1))になるように

    y *= i+1; //分母をa!になるように
  }
  mint z = x/y;
  return z;
}

int main(){
  ll n,a,b;
  cin >>n>>a>>b;
  //今回求める式は 2^n - 1 - nCa - nCb
  mint ans = f(2,n);
  ans -= 1;
  ans -= choose(n,a);
  ans -= choose(n,b);

  cout <<ans<<endl;
  return 0;
}
