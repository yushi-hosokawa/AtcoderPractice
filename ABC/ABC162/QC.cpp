#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int gcd(ll a,ll b){
  if (a%b == 0)return(b);
  else return(gcd(b,a%b));
}

int main(){
  int k;
  int flag;
  ll total=0;
  cin>>k;

/*

  if(k==1){
    cout<<1<<endl;
    return 0;
  }
  if(k==2){
    cout<<9<<endl;
    return 0;
  }
  //全部同じ数字
  for(int i=1;i<=k;i++){
    total+=i;
  }


  //2つ同じ数字の時
  for(int i=1;i<=k;i++){
    for(int j=i+1;j<=k;j++){
      int s =gcd(i,j);
      total += (s*6);

    }
  }

  //全部数字が違うとき
  for(int i=1;i<=k;i++){
    for(int j=i+1;j<=k;j++){
      for(int l=j+1;l<=k;l++){
        int  x = gcd(i,j);
        int  y = gcd(x,l);
        total+=(6*y);
      }
    }
  }
  cout<<total<<endl;

  */
  //全部数字が違うとき
  for(int i=1;i<=k;i++){
    for(int j=1;j<=k;j++){
      for(int l=1;l<=k;l++){
        int  x = gcd(i,j);
        int  y = gcd(x,l);
        total+=y;
      }
    }
  }

  cout<<total<<endl;
}
