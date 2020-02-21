#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  ll n;
  cin >>n;
  ll ans =0;

  if(n%2 ==1)cout<<0<<endl;


  else{
      n /= 2;
    while(n){
      ans += n/5;
      n /= 5;
    }
    cout <<ans<<endl;
  }

}
