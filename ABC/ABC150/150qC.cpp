#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

//https://atcoder.jp/contests/abc150/tasks/abc150_c
int main(){
  int n;
  cin >>n;
  vector <int> p(n);
  vector <int> q(n);
  rep(i,n)cin >>p.at(i);
  rep(i,n)cin >>q.at(i);

  vector<int> a(n);//
  //aには1からnまでの整数を格納
  rep(i,n) a[i] = i+1;

  //vectorをキーとするmapを定義
  //vectorの要素が変わってなくても、vectorの並びが変化していれば別のkeyとして登録
  //next_permutationは辞書順に数列を列挙できるようにvectorの要素を並び替えてくれる
  //その一つ一つの順列vectorをkeyとし、mapの数をvalueとすることで、valueにはkeyの順列が辞書順で数えて何番目かを格納するようになる
  //key[a{1,2,3,4}] =0;
  //key[a{1,2,4,3}] =1;
  //key[a{1,3,2,4}] =2;
  //みたいな感じで格納されていく
  map<vector<int>,int> mp;
  do {

    //cout <<"mpのサイズ"<<mp.size()<<endl;
    //mpにaがキー、mp.sizeがvalueの値を代入
    mp[a] = mp.size();

  //辞書順に
  } while (next_permutation(a.begin(),a.end()));


  int ans = abs(mp[p] - mp[q]);
  cout <<ans <<endl;
  return 0;
}
