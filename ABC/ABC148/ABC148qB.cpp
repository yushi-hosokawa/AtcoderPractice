#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  int n ;
  cin >>n;
  string s,t ;
  cin >>s>>t;
  string ans;

  rep(i,n){
    ans += s.at(i);
    ans += t.at(i);
  }
  cout <<ans<<endl;

}
