#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  string s;
  cin >>s;
  int n =s.size();
  string t;
  bool flag =true;
  bool ans =true;
  for(int i=0;i<n/2;i++){
    if(s.at(i)==s.at(n-i-1)){
      t+=s.at(i);
    }
    else {
      flag =false;
      break;
    }
  }

  if(flag){
    int x =t.size();

    if(x==1){
      cout<<"Yes"<<endl;
      return 0;
    }

    for(int i=0;i<x/2;i++){
      if(t.at(i)!=t.at(x-i-1)){
        ans=false;
      }
    }
  }
  else {
    cout <<"No"<<endl;
    return 0;
  }

  if(ans){
    cout<<"Yes"<<endl;
    return 0;
  }
  cout<<"No"<<endl;
  return 0;
}
