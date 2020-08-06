#include <bits/stdc++.h>
using namespace std;

//本当は間違いのコード(提出したら通ってしまった)
int main(){
  int N;
  int t[100010],x[100010],y[100010];
  bool checker = true;
  cin >> N;
  t[0]=x[0]=y[0]=0;
  for (int i = 1; i<=N ;++i)cin>>t[i]>>x[i]>>y[i];
  //直前の移動先から次の移動先の値を検討しなければならないのにしてない
  for (int i = 1; i<=N ;++i){
    cout<<"t="<<t[i]<<"のとき,x="<<x[i]<<",y="<<y[i]<<endl;
    if((t[i]<(x[i]+y[i])) || ((t[i]&1)!=((x[i]+y[i])&1))){
        cout<<"条件外です"<<endl;
        checker = false;
        break;
    }
  }
  if(checker)cout <<"Yes"<<endl;
  else cout<<"No"<<endl;

}
