#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main(){
  int n;
  cin >> n;
  vector<int> a;

  if(n ==0 ||n==1){
    cout<<"no"<<endl;
    return 0;
  }

  if(n % 2 ==0){
    cout<<"no"<<endl;
    break;
  }
  if(n % 3 ==0){
    cout<<"no"<<endl;
    break;
  }

  for(int i=2;i<=(n/3);i++){
    if( n%i ==0 ){
      cout<<"no"<<endl;
      break;
    }
  }
  cout <<"yes"<<endl;


}
