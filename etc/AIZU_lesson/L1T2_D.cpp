#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  int w,h,x,y,r;
  cin >>w>>h>>x>>y>>r;
  if((x+r)>w ||(x-r)<0){
    cout<<"No"<<endl;
    return 0;
  }
  if((y+r)>h ||(y-r)<0){
    cout <<"No"<<endl;
    return 0;
  }
  cout <<"Yes"<<endl;
  return 0;
}
