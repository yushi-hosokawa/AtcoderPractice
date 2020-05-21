#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

P f(int x){
  //末尾の桁の値を入手
  int a = x%10;
  int b = 0;

  //whileは整数で0以外の時にループが実行される!
  //だからループを抜ける＝10で割ったときの値がゼロになったとき、bが先頭の桁になる
  while (x){
    b =x;
    x /= 10;
  }
  return P(a,b);
}

int main(){
  int n ;
  cin >>n;


}
