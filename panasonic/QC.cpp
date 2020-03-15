#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  unsigned long long  a,b,c;
  long double ra,rb,rc;
  cin >>a>>b>>c;
  ra = sqrt(a);
  rb = sqrt(b);
  rc = sqrt(c);
  if(ra+rb<rc)cout <<"Yes"<<endl;
  else cout<<"No"<<endl;
}
