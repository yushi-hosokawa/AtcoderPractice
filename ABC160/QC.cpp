#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  int k,n;
  cin >>k>>n;
  vector <int> a(n);
  rep(i,n)cin>>a.at(i);

  int tan = a.at(0) +k - a.at(n-1);
  int amax=tan;
  ll sum=tan;
  for(int i=1;i<=n-1;++i){
    int dist =a.at(i)-a.at(i-1);
    sum += dist;
    amax = max(amax,dist);
  }
  sum -= amax;
  cout<<sum<<endl;
}
