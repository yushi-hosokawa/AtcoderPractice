#include <bits/stdc++.h>
using namespace std;

//移動後の値ー移動前して全ポイントを時間内に通過できるかを考えよう
int main(){
  int N;
  int t[100010],x[100010],y[100010];
  bool checker = true;
  cin >> N;
  t[0]=x[0]=y[0]=0;
  for (int i = 1; i<=N ;++i)cin>>t[i]>>x[i]>>y[i];
  for (int i = 1; i<=N ;++i){
    int bbt = t[i]-t[i-1];
    //戻っても負にならないように絶対値をとろう
    int bbx = abs(x[i])-abs(x[i-1]);
    int bby = abs(y[i])-abs(y[i-1]);

    //cout<<"t="<<t[i]<<"のとき,x="<<x[i]<<",y="<<y[i]<<endl;
    if((bbt<(bbx+bby)) || ((bbt&1)!=((bbx+bby)&1))){
        //cout<<"条件外です"<<endl;
        checker = false;
        break;
    }
  }
  if(checker)cout <<"Yes"<<endl;
  else cout<<"No"<<endl;

}
