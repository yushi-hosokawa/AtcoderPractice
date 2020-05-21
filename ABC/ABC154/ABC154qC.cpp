#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  int n;
  cin>>n;
  int a[n];
  rep(i,n)cin >>a[i];

  set<int> st;
  for (ll i=0;i<n;++i){
    st.insert(a[i]);
  }
  int ans = sizeof(a)/sizeof(a[0]);
  if(ans==st.size())cout<<"YES";
  else cout<<"NO";

}
