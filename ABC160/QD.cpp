#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  int n,x,y;
  cin >>n>>x>>y;
  vector <int> a(n);
  for(int i=1;i<n;++i){
    for(int j =i+1;j<=n;++j){
      int dis1=j-i;
      int dis2 =abs(i-x) + 1 +abs(j-y);
      int ans =min(dis1,dis2);
      a.at(ans)++;

    }
  }
  for(int i=1;i<n;i++){
    cout<<a.at(i)<<endl;
  }

}
