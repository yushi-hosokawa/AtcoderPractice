#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int check(int a,int b){
  if(a==7){
    ++b;
  }
return b;
}

int main(){
  int n,x,y,z;
  cin >>n;
  x =n/100;
  y =(n-(x*100))/10;
  z = n-(x*100+y*10);
  int flag=0;
  flag =check (x,flag);
  flag =check (y,flag);
  flag =check (z,flag);
  if(flag){
    cout<<"Yes"<<endl;
  }
  else{
    cout<<"No"<<endl;
  }

}
