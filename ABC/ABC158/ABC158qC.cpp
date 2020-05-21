#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  int a,b;
  cin>>a>>b;
  int x =0;
  int y =0;

  while(y!=a){
    x+=1;
    y =x*(0.08);
  }
  int x8min =x;
  while(y==a){
    x +=1;
    y =x*(0.08);
  }
  int x8max = x-1;
  int x10 = -1;
//  cout<<x8min<<" : "<<x8max<<endl;

  for(int i =x8min;i<=x8max;i++){
    int y10=i*(0.1);
//    cout<<"i "<<i<<"y10  "<<y10<<endl;
    if(y10==b){
      x10 =i;
      break;
    }
  }
  cout<<x10<<endl;
}
