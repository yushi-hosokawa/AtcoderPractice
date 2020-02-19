#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int main(){
  int n;
  cin >>n;
  vector <ll> a(n);
  rep(i,n)cin >>a.at(i);

  ll maxv = -2000000000;
  ll minv = a.at(0);

  for(int i =1;i<n;i++){
    //for分の中で一つの値の大小比較は O(n)
    maxv = max(maxv,(a.at(i)-minv));
    minv = min(minv,a.at(i));
  }
  cout <<maxv<<endl;
}


/*
//時間外になってしまう
int main(){
  int n;
  cin >>n;
  vector <int> a(n);
  rep(i,n)cin >>a.at(i);
  ll dmax = -1000000000;

  //for文の中でソートすると計算量が O(n2)になってしまう
  for (int i = 1;i<n;++i){
    int x= a.at(i);//新しい大きいのが好ましい数
    sort(a.begin(),(a.begin()+(i)));//選択した数字より前の値をソート
    ll dif = x - a.at(0);
    //cout <<"a.at(0)= "<<a.at(0)<<"dif = "<<dif<<endl;
    dmax = max(dmax,dif);

  }
  cout<<dmax<<endl;
}
*/
