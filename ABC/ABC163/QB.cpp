#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  int n,m;
  cin>>n>>m;
  vector<int> a(m);
  int sum =0;
  rep(i,m){
    cin>>a.at(i);
    sum+=a.at(i);

  }
  if(n<sum){
    cout<<-1<<endl;

  }
  else{
    cout<<n-sum<<endl;
  }
  return 0;

}
