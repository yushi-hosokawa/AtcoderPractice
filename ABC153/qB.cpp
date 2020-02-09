#include <bits/stdc++.h>
using namespace std;

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
