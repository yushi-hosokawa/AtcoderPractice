#include <bits/stdc++.h>
using namespace std;

//あらかじめdefineしておくs
const unsigned int BIT_FLAG_0 = (1 << 0); // 0000 0000 0000 0001
const unsigned int BIT_FLAG_1 = (1 << 1); // 0000 0000 0000 0010
const unsigned int BIT_FLAG_2 = (1 << 2); // 0000 0000 0000 0100
const unsigned int BIT_FLAG_3 = (1 << 3); // 0000 0000 0000 1000
const unsigned int BIT_FLAG_4 = (1 << 4); // 0000 0000 0001 0000
const unsigned int BIT_FLAG_5 = (1 << 5); // 0000 0000 0010 0000
const unsigned int BIT_FLAG_6 = (1 << 6); // 0000 0000 0100 0000
const unsigned int BIT_FLAG_7 = (1 << 7); // 0000 0000 1000 0000


int main(){
  int a = 45;
  int b = 25;

  int c = (a&b);
  int d = (a|b);
  cout <<c<<" : "<<d<<endl;

  //目に見える形に表示するためにbitsetを使う。基本表示の時以外はいらない
  cout <<bitset<8>(a) <<" : "<<bitset<8>(b)<<endl;

  int e = 1;
  cout <<e<<endl;
}
