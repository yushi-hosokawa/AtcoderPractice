#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  int a,b,c,d;
  cin >>a;
  cin >>b;
  c = min(a,b);
  d = max(a,b);

  if(c ==1 && d==2)cout<<3<<endl;
  if(c ==1 && d==3)cout<<2<<endl;
  if(c ==2 && d==3)cout<<1<<endl;

}
