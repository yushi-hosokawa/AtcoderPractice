#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

//https://atcoder.jp/contests/apg4b/tasks/APG4b_u

//関数のプロトタイプ宣言
//mainの後ろに関数定義するなら先にプロトタイプ宣言をしなければいけない
int f(int x);
int g(int &x);
int sum100(vector<int> &a);

int main(){
  int a = 1;
  //aの参照をｂとする。
  //参照先の型 &参照の名前 = 参照先;の形で定義
  //&b定義時、初期値を入力しないとエラーになる(下の例だとaを指定している)
  int &b =a;
  cout <<a<<endl;

  //bの値を入れ替えると参照元のaの値も入れ替わる
  b =3;
  cout <<a<<endl;


  string c;
  string &d =c;
  //参照元に初期値が入力されてなくても大丈夫
  d = "hello" ;
  cout <<c<<endl;

  int e =f(a);
  cout <<a<<" : "<<e <<endl;
  //渡されたaは変化しない

  int h =g(a);
  cout <<a<<" : "<<h <<endl;
  //渡されたaの値も変更される
}
//値渡しを使った関数の例
int f(int x){
  x=x*2;
  return x;
}

//参照渡しを使った関数の例
int g(int &x){
  x= x*2;
  int y = x-2;
  return y;
}

//参照渡しの実用例
//参照渡しの関数は渡した引数の値を変化させないような値を返す時に使うと計算時間が短縮される
//値渡しの関数は引数に指定したもののコピーをとるからめちゃでかい配列を複数回呼びさす関数とかは大幅に時間が取られる。
// 配列の先頭100要素の値の合計を計算する (参照渡し)

int sum100(vector<int> &a) {
  int result = 0;
  for (int i = 0; i < 100; i++) {
    //配列の中身をいじるわけでないから参照渡しでもおっけー
    //計算時間が結構変わるらしい
    //配列を引数に関数を作る時は基本参照渡しがいいらしい
    result += a.at(i);
  }
  return result;
}
