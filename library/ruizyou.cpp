#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


//xのn乗を求める関数
//今回は花の使う、使わないの全パターンである2^nを考えるため x=2, n =n（花の数）で考える
int pow(int x,int n){
  if(n < 1 ) return 1 ;//0乗なら1
  int y = pow(x,n/2);
  y *= y; //f(N) =f(N/2)^2のに置き換えることが可能。これを再起的に繰り返す
  if(n%2 == 1)y *= x; //nが奇数のときはx倍する
  return y;
}

int main(){
  int sum = pow(3,3);
  cout <<sum<<endl;
}
