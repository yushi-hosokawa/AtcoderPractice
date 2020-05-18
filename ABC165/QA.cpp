#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  int k,a,b;
  cin >>k;
  cin>>a>>b;
  int ans = k;
  int count = 1;
  bool flag=false;
  while(ans<=b){
    if(ans>=a&&ans<=b){
      flag=true;
    }
    ans=k*count;
    ++count;
  }
  if(flag)cout<<"OK"<<endl;
  else cout<<"NG"<<endl;
}
