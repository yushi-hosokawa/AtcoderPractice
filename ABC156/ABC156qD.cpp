#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  ll n,a,b;
  cin >>n>>a>>b;
  vector <int> x(n);
  ll ans;

  if(n < 200000){
    for (ll tmp = 0; tmp < (1 << n); ++tmp){
      bitset<100000> s(tmp);
      ll counter =0;
      for(int i =0; i<n ;i++){
        if(s.test(i)){
          counter++;
        }
      }
      if(counter !=a &&counter != b){
        ans++;
      }
    }
    cout <<(ans-1)<<endl;
  }
  else{
    for (ll tmp = 0; tmp < (1 << n); ++tmp){
      bitset<100000> s(tmp);
      ll counter =0;
      for(int i =0; i<n ;i++){
        if(s.test(i)){
          counter++;
        }
      }
      if(counter !=a &&counter != b){
        for (ll tmp2 = 0; tmp2 < (1 << n-100000); ++tmp2){
          bitset<10000> t(tmp2);
          for(int i =0; i<n ;i++){
            if(s.test(i)){
              ans++;
            }
          }
        }
      }
    }
    cout <<(ans-1)<<endl;
  }




}
