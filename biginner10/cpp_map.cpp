#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


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
  cout <<(mp["add"]+1)<<endl

  //自動の入力を許さないときはmp.at(key)を使えばよい
  cout <<mp.at("abc")<<endl;
}
