#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  int n;
  string s;
  cin >>n;
  cin >>s;

  int counter =0 ;

  for (int i=0;i<n-2;++i){
    string x;
    char x1 = s[i];
    x+=x1;
    char x2 = s[i+1];
    x+=x2;
    char x3 = s[i+2];
    x+=x3;


   if (x == "ABC")counter++;
  }

  cout <<counter<<endl;
}
//s.substr(i,3)=="ABC" これでi文字目から3文字分の文字列を取得し、比較
