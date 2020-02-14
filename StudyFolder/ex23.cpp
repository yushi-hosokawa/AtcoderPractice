#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  int n;
  cin >>n;
  vector <int> a(n);

  map<int,int> mp;
  rep(i,n)cin>> a.at(i);

  rep(i,n){
    if (mp.count(a.at(i))){
      mp.at(a.at(i))++;
    }
    else{
      mp[a.at(i)]=1;
    }
  }
  int ans  = 0;
  int maxi =0;
  for(P p : mp){
    if(p.second >maxi){
      ans = p.first;
      maxi = p.second;
    }
  }
  cout <<ans<<" "<<maxi<<endl;

}
