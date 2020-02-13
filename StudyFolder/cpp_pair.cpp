#include <bits/stdc++.h>
#define rep(i,n) for (int i =0;i<(n);i++)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main(){
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
