#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  ll a,b,k;
  cin >>a>>b>>k;
  int x = 0 ;
  if (a>=k){
    cout <<a-k<<" "<<b<<endl;
    return 0;
  }
  if (a<k){
    if ((k-a)>b){
      cout <<x<<" "<<x<<endl;
      return 0;
    }
    cout <<x<<" "<<b-(k-a)<<endl;
  }
  return 0;
}
