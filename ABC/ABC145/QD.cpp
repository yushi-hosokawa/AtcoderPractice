#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

// modint: mod 計算を int を扱うように扱える構造体
template<int MOD> struct Fp {
    long long val;
    constexpr Fp(long long v = 0) noexcept : val(v % MOD) {
        if (val < 0) val += MOD;
    }
    constexpr int getmod() { return MOD; }
    constexpr Fp operator - () const noexcept {
        return val ? MOD - val : 0;
    }
    constexpr Fp operator + (const Fp& r) const noexcept { return Fp(*this) += r; }
    constexpr Fp operator - (const Fp& r) const noexcept { return Fp(*this) -= r; }
    constexpr Fp operator * (const Fp& r) const noexcept { return Fp(*this) *= r; }
    constexpr Fp operator / (const Fp& r) const noexcept { return Fp(*this) /= r; }
    constexpr Fp& operator += (const Fp& r) noexcept {
        val += r.val;
        if (val >= MOD) val -= MOD;
        return *this;
    }
    constexpr Fp& operator -= (const Fp& r) noexcept {
        val -= r.val;
        if (val < 0) val += MOD;
        return *this;
    }
    constexpr Fp& operator *= (const Fp& r) noexcept {
        val = val * r.val % MOD;
        return *this;
    }
    constexpr Fp& operator /= (const Fp& r) noexcept {
        long long a = r.val, b = MOD, u = 1, v = 0;
        while (b) {
            long long t = a / b;
            a -= t * b; swap(a, b);
            u -= t * v; swap(u, v);
        }
        val = val * u % MOD;
        if (val < 0) val += MOD;
        return *this;
    }
    constexpr bool operator == (const Fp& r) const noexcept {
        return this->val == r.val;
    }
    constexpr bool operator != (const Fp& r) const noexcept {
        return this->val != r.val;
    }
    friend constexpr ostream& operator << (ostream &os, const Fp<MOD>& x) noexcept {
        return os << x.val;
    }
    friend constexpr Fp<MOD> modpow(const Fp<MOD> &a, long long n) noexcept {
        if (n == 0) return 1;
        auto t = modpow(a, n / 2);
        t = t * t;
        if (n & 1) t = t * a;
        return t;
    }

};

const int MOD = 1000000007;
using mint = Fp<MOD>;

int main(){
  int x,y;
  cin>>x>>y;

  //条件外の計算
  if((x+y)%3!=0){
    cout<<0<<endl;
    return 0;
  }
  if(2*x<y || 2*y<x){
    cout<<0<<endl;
    return 0;
  }



//  cout<<x<<" "<<y<<endl;
  int a = 0;
  int b = 0;//aにはxを2引いた回数,bにはｙを2引いた回数
  mint count =(x+y)/3;
//  cout <<count<<endl;
  while(count!=0){

    if(x>y ||x==y){
//      cout<<"a"<<endl;
      a+=1;
      x-=2;
      y-=1;
    }
    else{
//      cout<<"b"<<endl;
      b+=1;
      x-=1;
      y-=2;
    }

    count-=1;
  }
  mint sum_a=1;
  mint sum_b=1;
  mint sum_ab=1;
  for(int i=1;i<=a;++i){
    sum_a*=i;
  }
  for(int i=1;i<=b;++i){
    sum_b*=i;
  }
  for(int i=1;i<=(a+b);++i){
    sum_ab*=i;
  }

  mint ans=sum_ab/(sum_a*sum_b);

//  cout<<a<<" "<<b<<endl;
//  cout<<x<<" "<<y<<endl;
  cout<<ans<<endl;


}
