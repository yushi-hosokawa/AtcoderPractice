#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main(){
  int n,k;
  cin >>n>>k;
  double a[n];
  double e[n];
  double s[n];

  rep(i,n)cin>>a[i];
  double maxchecker =0.0;
  double checker = 0.0;

  rep(i,n)e[i]=a[i]+1.0;

  s[0]=e[0];
  for(int i =1; i<n;++i){
    s[i] = s[i-1]+e[i];
  }

  maxchecker = s[k-1];

  for(int i =0 ;i<n-k;++i){
    checker =s[i+k]-s[i];
    maxchecker = max(maxchecker,checker);
  }
  maxchecker/=2.0;
  printf("%.10f\n",maxchecker);
  return 0;
}
