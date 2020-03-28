#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  string s;
  cin >>s;
  char a=s.at(2);
  char b=s.at(3);
  char c=s.at(4);
  char d=s.at(5);
  if(a==b &&c==d){
    cout<<"Yes"<<endl;
  }
  else {
    cout<<"No"<<endl;
  }

}
