#include <bits/stdc++.h>
#define rep(i,n) for (int i =0;i<(n);i++)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main1(){
  P p(3,1);
  pair<string ,int> p2("abc",3);
  cout<< p.first <<"  :  "<<p2.first<<endl;

  //型が同じpairどうしなら比較することが可能。
  //比較のときは１番目の値の大小を比較、１番目が等しければ2番目が比較という感じで行われる
  P p3(3,1);
  P p4(2,10);

  if (p3<p4){
    cout <<"a<b"<<endl;
  }
  else{
    cout <<"a>=b"<<endl;
  }

  P p5(3,1);
  P p6(3,10);

  if (p5<p6){
    cout <<"a<b"<<endl;
  }
  else{
    cout <<"a>=b"<<endl;
  }




}
//二つの要素があり、一つの要素に対してソートを行う時はvectorの中にpairを入れてソート
int main2(){
    int n;cin>>n;

    //vectorの中にpairを突っ込む
    vector<pair<int,int>>pairs(n);
    for(int i = 0;i<n;i++){
        int x,y;cin>>x>>y;

        pairs[i]=make_pair(x,y);
    }
    //一つ目の要素の小さい順、その後二つ目の小さい順にソートされる
    sort(pairs.begin(),pairs.end());

    int count = 0;
    //for文で一つ目の要素が小さい順から呼部ようにする。
    rep(i,n){

        count+=pairs[i].second;
        x = pairs[i].first;
        cout<<i<<"番目の要素はpair("<<pairs[i].first<<","<<pairs[i].second<<")"<<endl;


    }

}

int main(){
    main2();
}