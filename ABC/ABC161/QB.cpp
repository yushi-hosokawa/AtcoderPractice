#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  int n,m;
  cin>>n>>m;
  vector<int> a(n);

  ll sam=0;
  rep(i,n){
    cin>>a.at(i);
    sam+=a.at(i);
  }
  ll flag1 = sam/(m*4);
  ll flag2 = ceil(sam/(m*4));
  ll flag;
  if(flag1==flag2){
    flag=flag1;
  }
  else {
    flag=flag2;
  }
  int counter = 0;
  sort(a.begin(),a.end(),greater<int>());

  rep(i,n){
  //  cout<<a.at(i)<<endl;
    if(a.at(i) < flag){
        break;
    }
    ++counter;
  }

  //cout<<counter<<"  "<<m<<endl;
  if(counter>=m){
    cout<<"Yes"<<endl;
  }
  else{
    cout<<"No"<<endl;
  }
}
