#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main(){
  int n;
  cin >>n;
  vector <int> x(n+1);
  for(int i =0;i<n;i++) cin >> x.at(i+1);
  ll sum =0;
  ll ans =0;
  for(int i =1;i<=100;i++){
    sum =0;
    for(int j =1;j<=n;j++){
      sum +=(((x.at(j))-i)*((x.at(j))-i));
    }
    if(i == 1){
      ans = sum;
    }
    ans =min(sum,ans);
  }
  cout<<ans<<endl;
}
