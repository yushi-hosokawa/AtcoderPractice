#include <bits/stdc++.h>
using namespace std;


/*
http://vivi.dyndns.org/tech/cpp/set.html
C++ の std::set とは順序付けされたデータを複数保持することができる順序付集合のコンテナクラスだぞ。
データを順不同に順序付集合に追加すると、その値をキーにし自動的にソートして内部に格納してくれるぞ。
つまり、要素が常にソートされた状態の配列のようなものだ。
内部的にはツリーを使用するので、ix 番目の要素を高速に取り出すことは出来ないけどね。
なお、multiset とは違い、重複するデータを保持することはできないぞ。

*/
int main(){


  set<int> st{3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
//値を取り出す時はイテレータ？を使って表示するらしい
//イテレータとは抽象化されたポインタのことだ。begin() で最初の要素への、end() で最後の要素の次へのイテレータを取得することが出来る。
//setはst.begin()で先頭アドレス、st.end()で最後のアドレスをもってくることができる

  auto itr = st.begin();//stの最初の要素のアドレスを格納する変数がitr
  cout <<"先頭要素の出力:"<< *itr <<endl; //itrの持つアドレスの中身を表示する

  //set型のstの要素を全部出力する方法
  cout << "前要素の出力"<<endl;
  for(auto itr2 = st.begin(); itr2 != st.end(); ++itr2){
    cout << *itr2 << endl;
  }






}