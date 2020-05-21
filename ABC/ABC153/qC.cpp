#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;


int main(){
  int n,k;
  cin>>n >>k;

  vector<int>h(n);
  rep(i,n)cin>>h[i];
  //昇順に並び替え
  sort(h.begin(),h.end());

  //n<kの時、これをしないと要素の数以上にvectorの要素を消してしまってエラーになる
  k = min(n,k);
  
  ll ans = 0;
  //k回ループ回すときはrep(i,k)
  rep(i,k){
    //要素の数を減らしてる
    h.pop_back();
  }
  rep(i,h.size()) ans += h[i];
  cout <<ans <<endl;
}

/*
int main(){
  //体力の高いモンスターの順にソート
  //k番目の要素から体力を足し算して出力
  long long N ,K;
  cin >>N>>K;
  int h[200010];
  for (int i= 0;i<N; ++i)cin>>h[i];
  //要素の大きい順にソート
  sort (h, h+N,greater<int>());

  long long sum =0;
  for (int i = K;i<N;++i)sum += h[i];
  cout<<sum<<endl;


}
//26:07
//やっぱり要素の個数で実行エラーが出てしまっていたのであかん
//int だとoverflow の危険あり、longlongを使おう
*/
