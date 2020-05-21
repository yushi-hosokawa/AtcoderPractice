#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  int n;
  cin>>n;
  set <string> s;
  rep(i,n){
    string x;
    cin>>x;
    s.insert(x);
  }
  cout<<s.size()<<endl;

}
