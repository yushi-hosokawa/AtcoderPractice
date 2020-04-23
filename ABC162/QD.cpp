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
  ll total =0 ;
  ll mtotal =0;


  map<char,int> x;

  x['R']=0;
  x['G']=0;
  x['B']=0;
  rep(i,n){
    x[s.at(i)]+=1;
  }
  total =x['R']*x['G']*x['B'];


  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if(j+(j-i)>=n)continue;
      if(s.at(i)!=s.at(j)&&s.at(i)!=s.at(j+(j-i)) &&s.at(j)!=s.at(j+(j-i))){
        ++mtotal;
      }
    }
  }
  total-=mtotal;
  cout <<total<<endl;

}
