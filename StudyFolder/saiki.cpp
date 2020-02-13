#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

//再起関数は関数の中で関数をよびだしていくことだ

int sum(int n){
  //再起関数呼び出し終わりの条件のif文（今回は引数が０になるまで）
  //ベースケース：再起呼び出しをしないで完了できる処理
  if (n == 0){
    return 0;
  }

  //ここで再起的に関数を呼び出している
  //再起ステップ：再起呼び出しを行い、その結果を用いて処理
  int s =sum (n-1);
  return s+n;
}

//区間a,bの整数の合計を出す再起関数
int sum_range(int a,int b){
  if (b==a) return a;

//最終状態を考える。最終的にaからb-1まで足して、そのあとにbを足して完成と考える。
//そのb-1の数を減らすのでそこまでの計算をやってくれる再帰関数を定義
//returnにその再起関数の結果を使って表示
//再起を止めるベースケースを考える。

  int s = sum_range(a,b-1);
  return s+b;
}

int main(){
  cout <<sum(3) << endl; //6
  cout <<sum_range(3,5)<<endl;

}
