#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i<(n);++i)
using namespace std;
typedef long long ll;
//数字iを文字列cに変換する時は一桁ごとにcharで一文字ずつ'0'を足して変換し、最後にstringで足し合わせる感じ
//一つの桁に対して、char c1 ='0'+i  その後、s=c1+c2+c3+...
/*
int main(){
  int a, b;
  cin>>a>>b;
  //string のコンストラクタは第一引数で文字列の長さ、第二引数で埋める文字を示すので
  string s(b,'0'+a);
  string t(a, '0'+b);
  cout<<min(s,t)<<endl;

}
*/
int main(){
  int a,b;
  cin >>a>>b;
  int ans = min(a,b);
  char cans = '0'+ans;
  string sans ;
  rep(i,max(a,b))sans+=cans;
  cout <<sans<<endl;
}
//30分以上
//int->char,stringの変換できないクズ
