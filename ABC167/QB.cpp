#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  ll a,b,c,k;
  cin >>a>>b>>c>>k;

  ll sum = k;
  ll count =0 ;
  if(sum<=a){
    cout <<k<<endl;
    return 0;
  }
  count +=a;
  sum-=a;
  if(sum<=b){
    cout <<count<<endl;
    return 0;
  }
  sum-=b;

  if(sum>=c){
    count-=c;
    cout<<count<<endl;
    return 0;
  }
  else{
    count-=sum;
    cout <<count<<endl;
    return 0;
  }



}
