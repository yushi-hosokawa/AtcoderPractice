#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;

const int MX = 1000005;

//篩の意味のsieve
struct Sieve{
  int n;
  vector<int> f, primes;
  Sieve(int n=1):n(n), f(n+1){
    //なんとかの篩の計算スタート
    for (int i = 2; i<=n;++i){
      //もしf[i]が素数ならifを使ってcontinue
      if(f[i])continue;
      //primesのなかに素数を突っ込んでいる
      primes.push_back(i);
      for (int j=i;j<=n;j +=i)f[j]=i;
    }
  }
  bool isPrime(int x){
    returnf[x];
  }
}


int main(){

}