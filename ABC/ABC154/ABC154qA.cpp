#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  string s,t;
  cin >>s>>t;
  int a,b;
  cin >>a>>b;
  string u;
  cin >>u;

  if(s==u){
    a-=1;
  }
  if(t==u){
    b-=1;
  }
  cout<<a<<" "<<b<<endl;
}
