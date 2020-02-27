#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  int n ;
  cin >>n;
  vector<int> a(n);
  rep(i,n)cin>>a.at(i);

  rep(i,n){
    if(a.at(i)%2==0){
      if(a.at(i)%3==0)continue;
      if(a.at(i)%5==0)continue;
      cout<<"DENIED"<<endl;
      return 0;
    }
  }
  cout <<"APPROVED"<<endl;
}
