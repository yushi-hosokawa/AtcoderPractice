#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

double ave(ll x){
  double sum = 0;
  for(int i=1;i<=x;++i){
    sum +=i;
  //  cout <<"sum="<<sum<<endl;
  }
  sum =sum/x;
  //cout <<"aveの値"<<sum<<endl;
  return sum;
}


int main(){
  int n,k;
  cin >>n>>k;
  double a[n];
  rep(i,n)cin>>a[i];
  double b[n];

  //double ave_check = ave(2);
  rep(i,n)b[i]=ave(a[i]);
  double maxchecker =0.0;
  double checker = 0.0;
  for(int i =0;i<=(n-k);++i ){
    checker = 0.0;
  //  cout <<"i="<<i<<endl;
    for(int j =i;j<(i+k);++j){
    //  cout<<"checkに"<<b[j]<<"を＋"<<endl;
      checker +=b[j];
    }
  //  cout <<checker<<endl;
    maxchecker =max(maxchecker,checker);
  }
  cout<<maxchecker<<endl;
}
