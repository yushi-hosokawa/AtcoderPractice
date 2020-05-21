#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  //この問題簡単スギィ
  int n;
  cin>>n;
  vector<int> a(n-1);
  vector<int> x(n+1);
  rep(i,n-1){
    cin>>a.at(i);
    x.at(a.at(i))+=1;
  }
  for(int i=1;i<=n;++i){
    cout<<x.at(i)<<endl;
  }

}
