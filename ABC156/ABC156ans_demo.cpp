#include <bits/stdc++.h>
using namespace std;

int64_t MOD = 1e9+7;

//---------- べき乗 ----------
int64_t power(int64_t a, int64_t n){
    if(n == 0) return 1;

    int64_t res = 1;
    while(n > 0){
        if(n % 2 == 1) res = res * a % MOD;
        a = a * a % MOD;
        n /= 2;
    }

    return res;
}

//---------- 逆元 ----------
int64_t inv(int64_t a){
    return power(a, MOD-2);
}


//--------- 組み合わせ ---------
int64_t comb(int64_t n, int64_t r){
  int64_t bunbo = 1, bunshi = 1;

  for(int i=0; i<r; i++){
    bunbo = bunbo * (r-i) % MOD;
    bunshi = bunshi * (n-i) % MOD;
  }

  return bunshi * inv(bunbo) % MOD;
}


int main(){
  int64_t N, A, B;
  cin >> N >> A >> B;
  cout<<comb(N,A)<<" : " <<comb(N,B)<<endl;
  cout <<power(2,N)<<endl;

  int64_t ans = power(2, N) - comb(N, A) - comb(N, B) - 1;
  while(ans < 0) ans += MOD;

  cout << ans << endl;
}
