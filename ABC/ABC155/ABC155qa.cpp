#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  int a,b,c;
  cin>>a>>b>>c;
  if(a==b){
    if( c!=a){
      cout<<"Yes"<<endl;
      return 0;
    }
  }
  if(a==c){
    if( b!=a){
      cout<<"Yes"<<endl;
      return 0;
    }
  }
  if(b==c){
    if( a!=b){
      cout<<"Yes"<<endl;
      return 0;
    }
  }
  cout<<"No"<<endl;
}
