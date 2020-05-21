#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  int a[110];
  cin >>N;
  for(int i=0;i<N;++i)cin>>a[i];
  int Alice = 0;
  int Takeshi = 0;
  sort(a,a+N,greater<int>());
  for(int i = 0; i<N ; ++i){
    if(i%2==0)Alice += a[i];
    else Takeshi += a[i];
  }
  cout <<Alice - Takeshi<<endl;
}
