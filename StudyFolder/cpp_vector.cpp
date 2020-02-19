//内容は https://atcoder.jp/contests/apg4b/tasks/APG4b_n

#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main(){
  int n =5;
  //要素数1のvecを定義
  //要素数を指定しないとエラー
  //各要素には0が入ってる
  vector <int> vec (n);
  int x =10;
  vec[1] =500;
  //配列のような要素の取得が可能
  //atを使っても取得可能
  //vec[1]の書き方でなくvec.at(1)の書き方のほうがサイズ外のときエラーが出るからよい
  cout<<"vec[1]の要素 :"<<vec.at(1)<<"同じ要素"<<vec[1]<<endl;

  //配列のように要素に値を代入
  //定義より大きい数を指定しようとするとおかしくなる

  rep(i,n){
    vec[i]=i;
    cout<<"vec["<<i<<"]の要素 :"<<vec[i]<<endl;
  }
  cout<<"vecのサイズ"<<vec.size()<<endl;

  //イテレータの取得(vectorのポインタ)
  //イテレータはautoで取得可能
  //イテレータは
  for (auto it = vec.begin(); it !=vec.end(); ++it)printf("%d\n",*it);

  //末尾に要素を追加
  //これは定義した要素を増やすことが可能
  vec.push_back(x);
  cout<<"vec[5] :"<<vec[5]<<endl;

  //vec.begin()とvec.end()はイテレータ（ポインタ）だから注意
  for (auto it = vec.begin(); it !=vec.end(); ++it)printf("%d\n",*it);

  cout<<"vecのサイズ"<<vec.size()<<endl;


  vector<int> vec2 (n);
  vec2[0] =1;
  vec2[1] =2;
  vec2[2] =3;
  cout <<"vec2による空要素の確認"<<endl;
  rep(i,n){
    if(!vec2[i])break;
    cout<<vec2[i]<<endl;
  }

  //ソートの確認
  cout<<"ソートの確認"<<endl;
  vector<int> vec3{ 1, 5, 7, 2, 8, 4 };
  for (auto itr=vec3.begin();itr !=vec3.end();++itr)cout<< *itr<<endl;

  //昇順ソート(小さい数から)
  sort(vec3.begin(),vec3.end());

  cout<<"昇順ソート後"<<endl;
  for (auto itr2=vec3.begin();itr2 !=vec3.end();++itr2)cout<<*itr2<<endl;


  //降順ソート(大きい数から)
  sort(vec3.begin(),vec3.end(),greater<int>());
  cout<<"降順ソート後"<<endl;
  for (auto itr2=vec3.begin();itr2 !=vec3.end();++itr2)cout<<*itr2<<endl;

  //順番反転ソート後
  //昇順＋反転ソート＝降順ソート
  sort(vec3.begin(),vec3.end());
  cout <<"順番反転後"<<endl;
  for (auto itr2=vec3.begin();itr2 !=vec3.end();++itr2)cout<<*itr2<<endl;



  //サイズを定義しないvetorはpush_backとかで要素を増やすときのみ使える
  //何もないときにvec5[2]とかを呼ぶとエラー
  vector<int> vec5;
  vec5.push_back(1);
  vec5.push_back(2000);
  vec5.push_back(100);
  cout<<vec5[1]<<"   "<<vec5.size()<<endl;

  //pop_backで要素を削ることができる
  vec5.pop_back();
  cout<<vec5[1]<<"   "<<vec5.size()<<endl;
  /*
  初期値の指定
次のように書くと、配列の各要素の初期値を指定できます。
vector<型> 配列名(要素数, 初期値);vector<型> 配列名(要素数, 初期値);
例えばvector<int> vec(3, 5);と書いた場合、配列変数vecは{5, 5, 5}で初期化されます。

  */
  vector<int> vec6(3,5);//配列変数vecは{5, 5, 5}で初期化
  vector <int> vec7{3,2,5,7};
  sort(vec7.begin(),(vec7.begin()+1));
  rep(i,4)cout<<vec7.at(i)<<endl;


  return 0;
}
