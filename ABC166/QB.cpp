#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  int n,k;
  cin>>n>>k;
  set<int> ans;
  rep(i,k){
    int x;
    cin>>x;

    rep(j,x){
      int y;
      cin>>y;
      ans.insert(y);
    }

  }
  cout<<n - ans.size()<<endl;


}
