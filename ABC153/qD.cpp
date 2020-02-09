#include <bits/stdc++.h>
using namespace std;
int main(){
  long long H;
  cin >>H;
  long long ctr=1;



  for (long long i=2;H>1;i*=2){
    ctr +=i;
    H/=2;
  }
  cout<<ctr<<endl;
}
//21:13
//for文でいくかwhileでいくかを即決しなきゃあかん
//とくに難しくない
