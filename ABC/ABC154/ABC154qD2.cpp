#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main(){
  int n,k;
  cin >>n>>k;
  double a[n];
  rep(i,n)cin>>a[i];
  double b[1005]={};

  //double ave_check = ave(2);
  double maxchecker =0.0;
  double checker = 0.0;
  for(int i =0;i<=(n-k);++i ){
    checker = 0.0;
  //  cout <<"i="<<i<<endl;
    for(int j =i;j<(i+k);++j){
  //    cout<<"checkに"<<b[j]<<"を＋"<<endl;
      checker += (a[j]+1.0);
    }
  //  cout <<checker<<endl;
    maxchecker =max(maxchecker,checker);
  }
  cout<<(maxchecker/2.0)<<endl;
}
