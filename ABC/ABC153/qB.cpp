#include <bits/stdc++.h>
//n回回すループ、各要素に対してi番目で操作できる最もよく使うやつを定義する
#define rep(i,n) for(int i = 0;i< (n); ++i)
using namespace std;

int main(){
  int h,n;
  cin >>h >>n;
  vector <int> a(n);
  rep(i,n)cin>>a[i];
  rep(i,n)h-=a[i];
  if (h<= 0)cout <<"Yes"<<endl;
  else cout <<"No"<<endl;
}

//vector の作り方
//repの作り方 要参考


/*
int main(){
  int H, N;
  int a[100010];
  cin >>H >>N;
  for (int i = 0; i<N ; ++i)cin >> a[i];
  //cout<<"Hの値:"<<H<<"  Nの値:"<<N<<endl;
  int sum =0;
  for (int i=0; i<N;++i ){
  //  cout <<"sumに"<<a[i]<<"を代入"<<endl;
    sum += a[i];
  }

  if (sum>=H){
    cout <<"Yes"<<endl;
  }
  else {
    cout <<"No"<<endl;
  }
}
//多分30分ぐらい
//数の上限とかの条件をしっかり確認すること、そこでミスして時間かかった
*/
