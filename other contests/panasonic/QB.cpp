#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  unsigned long long h,w;
  cin >>h>>w;
  unsigned long long ans = h*w;
  if (ans%2==1){
    cout << ans/2+1<<endl;
  }
  else cout<<ans/2<<endl;

}
