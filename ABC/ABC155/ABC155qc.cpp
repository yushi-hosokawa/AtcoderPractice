#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  int n;
  cin >>n;
  vector<string> st(n);
  rep(i,n)cin>>st.at(i);
  map<string,int> mp;
  int checker = 0;
  rep(i,n){
    if(mp.count(st.at(i))){
      mp[st.at(i)]+=1;
    }
    else{
      mp[st.at(i)] = 0;
    }

    checker = max(checker,mp.at(st.at(i)));
  }

  for(auto p:mp){
    if(p.second == checker){
      cout<<p.first<<endl;
    }
  }
}
