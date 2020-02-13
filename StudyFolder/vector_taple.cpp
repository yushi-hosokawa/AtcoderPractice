#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


//複数のtapleに対して,vectorを使ってsortする方法
//これで複数の要素を持つもののsort を行い、別要素で出力も可能
//ラムダ式とかつかっての詳しい条件での並び替えは https://minus9d.hatenablog.com/entry/2014/07/05/215756
int main() {

  int n =3;

  //tuple型を持つvectorを定義
  vector<tuple<int, int, int>> a;

  //n回ループでvectorにtupleをpush_backする(今回はループ回数iに対して、i,i+1,i+2を格納)
  //push_backっていうのがみそ
  rep (i,n)a.push_back(make_tuple(i,i+1,i+2));

  //並び順を反転
  reverse (a.begin(),a.end());

  //このループ条件はforeach文の書き方、左にループで使うvectorの要素の型,右にvectorの名前を書く。
  for (tuple<int, int, int> t : a) {
    int x, y, z;
    //tieで各要素に区切ってる
    tie(x, y, z) = t;
    cout << x << " " << y << " " << z << endl;
  }

  printf("\f");

  //順番を昇順のソートに
  sort (a.begin(),a.end());
  //もう一度出力
  //foreach的な書きかたの時、条件の左の書き方はauto [変数] で自動変換してくれる
  for (auto t : a) {
    int x, y, z;
    //tieで各要素に区切ってる
    tie(x, y, z) = t;
    cout << x << " " << y << " " << z << endl;
  }


}
