#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  int a,b,c;
  cin >>a>>b>>c;
  int sum = 0;
  vector <int> ans;
  for(int i=1;i<=c;i++){
    if(c%i==0)ans.push_back(i);
  }
  for(auto i : ans){
    if(a<=i&&b>=i)sum++;
  }
  cout<<sum<<endl;
}
