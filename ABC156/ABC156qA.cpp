#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  int n, r ,x;
  cin >>n>>r;
  x =r+(100*(10-n));
  if(n>=10){
    cout <<r<<endl;
  }  else cout<< x<<endl;

}
