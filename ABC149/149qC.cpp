#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  int x ;
  cin >>x;
  if (x==2){
    cout <<x<<endl;
    return 0;
  }
  bool check = false;
  for (int i = 2;i<x;i++){
    if((x%i)==0){
      check =true;
      break;
    }
  }

  while(check){
    bool ans =false;
    x+=1;
    for(int i = 2;i<x;i++){
      if ((x%i)==0){
        ans =true;
        break;
      }
    }
    check = ans;
  }
  cout<<x<<endl;
}
