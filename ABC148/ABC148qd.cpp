#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  int n;
  cin >>n;
  vector <int> a(n);
  rep(i,n)cin>>a.at(i);

  int point =0;
  int number =0;

  bool endflag =1;
  rep(i,n){
    if(a.at(i)==1){
      endflag =0;
      point =i;
      break;
    }
  }

  if(endflag){
    cout <<-1<<endl;
    return 0;
  }

  endflag =1;
  while(1){
    endflag = 1;
    for (int i =point;i<n;i++){
      //cout<<"i = "<<i<<endl;
      if(a.at(i)==(number+1)){
        //cout<< "get number ="<<a.at(i)<<endl;
        endflag =0;
        point =i;
        break;
      }
    }
    if(endflag){
      cout<<n-number<<endl;
      return 0;
    }
    ++number;
  }
}
