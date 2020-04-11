#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

void no(){
  cout<<"No"<<endl;
}

int main(){
  int n;
  string s;
  cin >>n>>s;

  if(n%2==1){
    no();
    return 0;
  }

  else {
    bool flag =true;
    for(int i =0;i<n/2;++i){
      char a =s.at(i);
      char b =s.at(n/2+i);
      if(a!=b){
        flag = false;
        break;
      }
    }

    if(flag){
      cout<<"Yes"<<endl;
    }
    else{
      no();
    }
  }
}
