#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){

  ll x;
  cin>>x;
  ll p,q;
  q =x%500;
  q /=5;
  q *=5;
  p =x/500;
  p *= 1000;
  cout <<p+q<<endl;
}
