#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  unsigned long long x;
  cin>>x;

  unsigned long long ans = 100;
  int count =0;
  while(ans<x){
    unsigned long long a = ans/100;
    ans+=a;
    ++count;
  }

  cout <<count<<endl;


}
