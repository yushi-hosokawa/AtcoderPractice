#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<=(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){

  int n;
  cin>>n;
  ll sum = 0;
  rep(i,n){
    if(i%3 != 0 && i%5 !=0){
      sum+=i ;
    }

  }
  cout<<sum<<endl;
}
