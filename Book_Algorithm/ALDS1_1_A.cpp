#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  int n;
  cin >>n;
  vector <int> a(n+1);
  rep(i,n)cin >>a.at(i);

  int v =a.at(0);
  rep(i,n-1)cout<<a.at(i)<<" ";
  printf("%d\n",a.at(n-1));

  for(int i =1;i<n;i++){
    v = a.at(i);
    //cout<<"v = "<<v <<endl;
    for(int j =(i-1);j>=0;j--){
      if(a.at(j)>v &&j!=0 ){//jがゼロでない時に自分より大きい数を見つけた時
        a.at(j+1)=a.at(j);//大きい値をずらす作業
        continue;
      }
      if(j==0){//jがゼロのとき
        if(v>a.at(0)){
          a.at(1)=v;
          break;
        }
        else{
          a.at(1) =a.at(0);
          a.at(0) = v;
          //cout<<"nonbreak"<<endl;
          break;
        }
      }
      a.at(j+1) = v;//ｊがゼロでないとき
      //cout<<"break"<<endl;
      break;
    }
    rep(i,n-1)cout<<a.at(i)<<" ";
    printf("%d\n",a.at(n-1));
  }
}
