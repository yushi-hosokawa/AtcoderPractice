#include <bits/stdc++.h>
#define rep(i,n) for (int i=0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main(){
  int n,k,m;
  cin >>n>>k>>m;
  vector <int>  vec(n+5);
  int sum =0;
  rep(i,n-1){
    cin>>vec[i];
    sum+=vec[i];
  }
  int ans;

  ans = m*n-sum;
  if(ans>k){
    cout<< "-1"<<endl;
  }
  else if(ans<0)cout <<0<<endl;
  else cout<<ans<<endl;


}
