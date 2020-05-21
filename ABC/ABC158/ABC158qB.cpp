#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  ll n,a,b;
  cin >>n>>a>>b;
  ll blueball =0;
  ll sum = 0;
  ll rb =a+b;
  ll count =0;

  count =n/rb;
  sum=(count*rb)+a;
  //cout<<"sum:"<<sum<<endl;
  if(sum<=n){
    blueball =(count+1)*a;
  }

  else{
    ll x = sum-n;
  //  cout<<x<<endl;
    blueball =(count+1)*a -x;
  }
  cout <<blueball<<endl;
}
