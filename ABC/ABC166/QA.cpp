#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  string s;
  cin>>s;
  string abc ="ABC";
  string arc ="ARC";
  if(s.at(1)=='B'){
    cout<<arc<<endl;
  }
  else {
    cout<<abc<<endl;
  }
}
