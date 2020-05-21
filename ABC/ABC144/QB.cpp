#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  int n;
  cin>>n;
  bool flag=false;
  for(int i=1;i<10;++i){
    for(int j=1;j<10;++j){
      if(n==(i*j))flag =true;

    }

  }
  if(flag)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
}
