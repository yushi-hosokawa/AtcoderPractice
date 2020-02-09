#include <bits/stdc++.h>
using namespace std;
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
