#include <bits/stdc++.h>
#define rep(i,n) for (int i=0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,string> P;

int main(){
  int n,m;
  cin >>n >>m;
  int p;
  string s;
  int t[n+10]={0};//errorカウンター
  int u[n+10]={0};//正答チェッカー
  rep(i,m){
    cin>>p>>s;

    if(u[p-1])continue;
    if(s=="AC"){
  //    cout<<"AC入力"<<endl;
      u[p-1]=1;
    }
    else {
  //    cout<<p[i]<<"  "<<u[p[i]]<<endl;
      if (!u[p-1])t[p-1]+=1;
    }
  }
  int sum_A =0;
  int sum_e =0;
  rep(i,n){
    sum_A += u[i];
    if(u[i])sum_e += t[i];
  }
  cout <<sum_A<<" "<<sum_e<<endl;
}
