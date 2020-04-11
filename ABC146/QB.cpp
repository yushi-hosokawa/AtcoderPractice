#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  int n;
  string s;
  cin>>n;
  cin>>s;
  int x = s.size();
  int ask = 65;
  rep(i,x){
    char y = s.at(i);
    y -= ask;
    y+=n;
    y%=26;
    y+=ask;
    s.at(i) =y;

  }
  cout << s <<endl;

}
