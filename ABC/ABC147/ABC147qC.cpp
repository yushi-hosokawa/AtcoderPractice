#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  int n ;
  cin >>n;
  vector<int> a(n);
  vector<int> x;
  vector<int> y;
  rep(i,n){
    cin >>a.at(i);
    //cout<<a.at(i)<<endl;
    int roop = a.at(i);
    for(int j = 0;j<roop;j++){
      int cx, cy;
      cin >>cx>>cy;
      x.push_back(cx);
      y.push_back(cy);
    //  cout <<cx<<" "<<cy<<endl;
    }
  }
  a.push_back (0);

  int ketacheck;
  bool tfcheck =true;
  for(int tmp =0;tmp <(1<<15); tmp++){
    bitset<15> s(tmp);
    map <int,int>score;
    int snumber =a.at(0);
    int nnumber = 0;
    for(int i = 0; i<n ;i++){

      if(s.test(i)){//1のときは正しい意見とかんがえる
        for(int j=snumber;j<nnumber;j++){
          if(score.count(x.at(j))){
            if(score[x.at(j)]==y.at(j))tfcheck = false;
          }
          else {
            score[x.at(j)] = y.at(j);
          }
        }
      }
      snumber +=a.at(i);
      nnumber +=a.at(i+1);
    }
    int keta = 0;
    if(tfcheck){
      cout<<"tf true"<<endl;
      for(int i =0 ;i<n;i++){
        if(s.test(i))keta++;
      }
    }
    ketacheck = max(ketacheck,keta);
  }
  cout <<ketacheck<<endl;

}
