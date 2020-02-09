#include <bits/stdc++.h>
using namespace std;

int main(){
  long long H,N;
  long long a[1010] ,b[1010];
  vector<long long> c(1010);
  cin >>H >>N;
  for (int i=0; i<N;++i)cin >>a[i]>>b[i];

  for(int i=0; i<N;++i)c

  while ()

  /*
  for (int i=0; i<N;++i)c[i]=a[i]-b[i];
  sort (c, c+N,grater<int>());
  */

  //最大効率の技を使用するようにする
  //残り体力が低くなったら手加減して倒せるようにする
  //手加減は最大効率の技より魔力が小さい技かつ攻撃力小さいで一番効率がいい
  //最大効率の技が被ったときは魔力が低いものにする
}

/*
//先駆者兄貴の回答
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <bitset>
#include <unordered_map>
#include <queue>
#include <cstring>

using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repn(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
#define MOD 1000000007

int gcd(int a, int b){
    if( a < b){
        swap(a,b);
    }
    return (a % b == 0)? b:gcd(a, a%b);
}

int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}


int main(){
    ll dp[10001];
    rep(i,10001){
        dp[i] = INT32_MAX;
    }

    dp[0] = 0;
    ll h,n;
    cin >> h >> n;
    unordered_map<ll, ll> spells;
    rep(i,n){
        ll cost, power;
        cin >> power >> cost;
        spells.insert(make_pair(cost, power));
    }

    for(pair<ll, ll> spell : spells){
        rep(i,h){
            if(dp[i] != INT32_MAX ){
                ll target = min(h, i + spell.second);
                dp[target] = min(dp[i] + spell.first, dp[target]);
            }
        }
    }

    cout << dp[h] << endl;
}
*/
