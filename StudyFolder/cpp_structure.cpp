#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

struct Mypair{
  //メンバ変数
  int x;
  string y;
  //コンストラクタ
  Mypair(){
    cout <<"constructor called"<<endl;
  }

  //引数２個のコンストラクタ
  Mypair(int num ,string word){
    cout <<"2set constructor called"<<endl;

    //コンストラクタの引数を構造体に代入
    x = num;
    y = word;
  }

  //コピーコンストラクタ
  Mypair(const Mypair &old){ //oldにはコピー元のMypair型構造体がわたされる
    cout <<"copy constructor called"<<endl;
    x = old.x +1;
    y = old.y +"new";
  }

//＋演算子のオーバーロード
  Mypair operator+(const Mypair &other){
    Mypair ret;
    ret.x=x+other.x;//ここではint型の+演算子が呼ばれる
    ret.y=y+other.y;//ここではstring型の＋演算子が呼ばれる。
    return ret;
  }

  //メンバ関数
  void print(){
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
  }

};



int main(){
  //引数２個の構造体
  Mypair p (9999,"good");

  //引数なしの構造体の呼び方
  Mypair p2  ;

  //メンバ変数に値を代入可能
  p2.x = 12345;

  //値を入力しないと？
  //p2.y = "hello";



  Mypair q(p);//コピーコンストラクタが呼ばれる
  cout <<"q.x = " << q.x << endl;
  cout <<"q.y = " << q.y << endl;

  Mypair r =q;//コピーコンストラクタが呼ばれる
  cout << "r.x ="<<r.x<<endl;
  cout << "r.y ="<<r.y<<endl;


  //メンバ関数の呼び出し
  p.print();
  p2.print();

//演算子オーバーロード
  Mypair a = {123, "hello"};
  Mypair b = {456, "world"};
  //Mypair型の+演算子が呼ばれる
  Mypair c =a+b;//このMypair型の足し算について上で定義した
  cout <<"c.x ="<<c.x<<endl;
  cout <<"c.y ="<<c.y<<endl;

}
