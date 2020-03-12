#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  string s;
  cin >>s;
  int n = s.size();
  int count =0 ;
  for (int i = 0;i<n/2;i++){
  //  cout<<s.at(i)<<" : "<<s.at(n-i-1)<<endl;
    if (s.at(i)!=s.at(n-i-1)){
      count++;
    }
  }
  cout<<count<<endl;
}
