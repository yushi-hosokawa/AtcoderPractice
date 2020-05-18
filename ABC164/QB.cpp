#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  int a,b,c,d;
  cin>>a>>b>>c>>d;

  bool wint =false;
  while(a>0){
    c-=b;
//    cout<<"aokiHP="<<c<<endl;
    if(c<=0){
      wint =true;
      break;
    }
    a-=d;
//    cout<<"takaHP="<<c<<endl;

  }
  if(wint){
    cout<<"Yes"<<endl;
  }
  else{
    cout<<"No"<<endl;
  }

}
