#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
//vectorのaの並び順を辞書順に順番列挙していくのがnext_permutation
//このdoは a{1,2,3,4} ,a{1,2,4,3} , a{1,3,2,4} ...という感じで辞書順で終わりがくるまでループを繰り返していく
//do whileで列挙していくのが良い(順番列挙できなくなるとnext_permutationがfalseをかえすから)
vector <int> vec{1,2,3,4};
do{
    for(int i=0; i<4; i++){
        cout<<vec.at(i);
        if(i!=3)cout<<"";
    }
    cout<<endl;
}while(next_permutation(a.begin(),a.end()));



//abc150の問題c
//順列をそう出力かつその順列が全体の何番目かを得たいときに使える。
//順列自体をvectorとしてkey,何番目かをvalueとするmap関数を作る方法
//vector pとqには何番目か知りたい順列が格納されている
vector<int> p(n),q(n);
//aには1からnまでの整数を格納
vector<int> a(n);//
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

//順列であるvector pが全体で何番目の順列か = mp[p]を出力。同様にmp[q]も出力
cout<<mp[p]<<" "<<mp[q]<<endl;



return 0;
}
