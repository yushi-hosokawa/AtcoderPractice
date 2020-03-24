#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  int n;
  cin >>n;
  map<int,char> chara;
  chara[0] ='a';
  chara[1] ='b';
  chara[2] ='c';
  chara[3] ='d';
  chara[4] ='e';
  chara[5] ='f';
  chara[6] ='g';
  chara[7] ='h';
  chara[8] ='i';
  chara[9] ='j';
  int x =1;
  for(int i=1;i<=n;i++){
    x*=i;
  }
  vector<string> ans(x);


  //nCiループを回して出力
  for(int i =1;i<=n;i++){

    for(int j = )
  }

  for(auto itr=ans.begin();itr!=ans.end();++itr){
    cout<<*itr<<endl;
  }


}
