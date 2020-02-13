#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

//連想配列という
// https://atcoder.jp/contests/apg4b/tasks/APG4b_aa
//mapはkey value構造を持つクラス
//keyを呼べばvalueが帰ってくるよ
int main(){
  //map関数を定義
  map<string ,int> mp;
  //keyにabc valueに123を登録
  mp["abc"] =123;
  //abcを出力
  cout <<mp["abc"]<<endl;

//特に作ってないkeyを入力すると、valueとして０が入っている
//0に1を足すので1が出力
  cout <<(mp["add"]+1)<<endl;

//自動の入力を許さないときはmp.at(key)を使えばよい
  cout <<mp.at("abc")<<endl;




  map<string, int> score;
  score["Alice"] = 100;
  score["Dave"] = 95;
  score["Bob"] = 89;



  //keyに対応する存在があるかないかをif文のcountで確認できる(所属判定)
  if (score.count("Alice")) {
    cout << "Alice: " << score.at("Alice") << endl;
  }
  if (score.count("Jiro")) {
    cout << "Jiro: " << score.at("Jiro") << endl;
  }

  //ループをつかって取り出すときはpair型or autoを使ってループ
  // Keyの値が小さい順にループ
  for (auto p : score) {
  auto k = p.first;
  auto v = p.second;
  cout << k << " => " << v << endl;
  }

}
