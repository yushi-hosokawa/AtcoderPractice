#include <bits/stdc++.h>
using namespace std;

//文字列操作についての詳しいサイト　https://qiita.com/MasahiroBW/items/3f56b22a079cd3272cd3

//関数の作り方
int findSumOfDigits(int n){
  int sum = 0;
  while (n>0){
    sum += n%10;
    n/=10;
  }
  return sum;
}

int main(){

  /*
  string s = "hello my world";

  //文字列の大きさ取得 size = s.size()
  cout <<s.size()<<typeid(s.size()).name()<<endl;
  int x = s.size() + 1;
  cout << x <<typeid(x).name()<< endl;
  string s2 = " world is mine";
  //文字列の結合は+で
  s +=s2;
  cout <<s<<endl;
*/

  int a = 10;
  cout << bitset<20>(a) <<endl;

  /*
  //複数の入力を配列に格納するやり方
  for(int i =0; i<N; ++i)cin >>a[i];

  //要素数N、配列a[]内の要素について、大きい数字からのsort
  sort(a,a+N,greater<int>());

  //要素数N,配列a[]内の要素について、小さい数字からのsort
  sort(a,a+N);
  */

  /*
  //文字列の反転方法
  string S = "hello my world";
  cout <<"反転前:"<<S<<endl;
  reverse(S.begin(),S.end());
  cout <<"反転後"<<S<<endl;



  */



}
