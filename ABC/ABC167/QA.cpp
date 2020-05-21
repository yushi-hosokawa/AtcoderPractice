#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  string s;
  string t;
  cin >>s;
  cin >>t;
  int x =s.length();
  bool flag = true;
  rep(i,x){
    if(s[i]!=t[i]){
      flag = false;
    }
  }
  if(flag)cout<<"Yes";
  else cout <<"No";
  return 0;

}
