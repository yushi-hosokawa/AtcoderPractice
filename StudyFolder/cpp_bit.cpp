#include <bits/stdc++.h>
using namespace std;

//あらかじめdefineしておくs
const unsigned int BIT_FLAG_0 = (1 << 0); // 0000 0000 0000 0001
const unsigned int BIT_FLAG_1 = (1 << 1); // 0000 0000 0000 0010
const unsigned int BIT_FLAG_2 = (1 << 2); // 0000 0000 0000 0100
const unsigned int BIT_FLAG_3 = (1 << 3); // 0000 0000 0000 1000
const unsigned int BIT_FLAG_4 = (1 << 4); // 0000 0000 0001 0000
const unsigned int BIT_FLAG_5 = (1 << 5); // 0000 0000 0010 0000
const unsigned int BIT_FLAG_6 = (1 << 6); // 0000 0000 0100 0000
const unsigned int BIT_FLAG_7 = (1 << 7); // 0000 0000 1000 0000


int main(){
  int a = 45;
  int b = 25;

  int c = (a&b);
  int d = (a|b);
  cout <<c<<" : "<<d<<endl;

  //目に見える形に表示するためにbitsetを使う。基本表示の時以外はいらない
  cout <<bitset<8>(a) <<" : "<<bitset<8>(b)<<endl;
  //偶奇の判定には1と&を取ればよい
  int e = 1;
  int f = 8;
  if((a&e) ==1)cout <<"odd"<<endl; //1と&とった値が 1 だと奇数
  if((a&e) ==0)cout <<"even"<<endl;//             0 だと偶数


  int g = f&e;
  cout <<"g = "<<g <<endl;

  //bit演算の演算子は優先度が低いからカッコで閉じとくのが無難
  if((f&e) ==1)cout <<"odd"<<endl; //1と&とった値が 1 だと奇数
  if((f&e) ==0)cout <<"even"<<endl;//             0 だと偶数

  //8けたの2進数(00011011) hを定義
  bitset<8> h("00011011");
  bitset<8> i("00110101");
  auto j = h & i;//aとbの&を取ったcを定義

  cout <<j <<endl;
  //jを左に1シフト
  cout <<(j<<1)<<endl;
  //シフトのオーバーフローは消される
  cout <<(j <<4)<<endl;

  cout <<"h = "<<h<<endl;
  h.set(7,1);//7番目のビットを1にする
  cout <<"h = "<<h<<endl;

//もしhの3ビット目が1ならture,ゼロならfalseを返す
  if(h.test(3)){
    cout <<"h's 4 bit is 1"<<endl;
  }
  else cout <<"4 bit is 0"<<endl;

//hを10進数の整数に変換
//mapや四則演算に使える
  cout <<hgit <<endl;

  //bitsetの操作一覧
  // https://atcoder.jp/contests/apg4b/tasks/APG4b_ac

  //bit全探索の雛形
  //tmpをtmp <(1<<3) の条件が成立するまで＝7まで3桁の2進数で出力
  cout <<endl<<"bit全探索の結果"<<endl;
  for (int tmp = 0; tmp < (1 << 3); tmp++) {
  bitset<3> s(tmp);
  // ビット列を出力
  //bitの桁数は変数で与えることができないので注意
  cout << s << endl;
  }
  //これを使って全要素を検索する方法
  //3つの整数a,b,cについてある組み合わせの足し算でNになるか確かめるとき
  //要素数　＝　整数の数をbitの大きさとして各けたのbitを足すか足さないかのフラグと考えて全要素探索。それぞれの桁をa,b,cの桁のように割り当てるということ
  //詳しくは https://atcoder.jp/contests/apg4b/tasks/APG4b_ac

}
