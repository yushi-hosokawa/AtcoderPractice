#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;



int main(){
  int n,q;
  cin >>n>>q;
  vector <int> veci(n);
  vector <string>vecs(n);
  queue<int> num;
  queue<string> p;
  int timekeeper ;
  rep(i,n)cin >>vecs.at(i)>>veci.at(i);
  rep(i,n){
    string x =vecs.at(i);
    int y =veci.at(i);
    p.push(x);
    num.push(y);
  }



  while(!p.empty()){
    int thisnum =num.front();
    string thisp =p.front();
    if(thisnum<=q){
      timekeeper += thisnum;
      cout <<thisp<<" "<<timekeeper<<endl;
      num.pop();
      p.pop();

    }else{
      timekeeper +=q;
      thisnum -= q;
      num.pop();
      p.pop();
      num.push(thisnum);
      p.push(thisp);
    }
  }
}
