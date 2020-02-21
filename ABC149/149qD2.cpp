#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

char ah(char x ,int n){
  char ss;
  if(x =='r')ss ='p';
  if(x =='s')ss ='r';
  if(x =='p')ss ='s';
  return ss;
}

ll gp(char x ,int anspoint,int r,int s,int p){
  if(x =='r')anspoint += r;
  if(x =='s')anspoint += s;
  if(x =='p')anspoint += p;
  return anspoint;
}

int main(){
  int n ,k;
  cin >>n>>k;
  int r,s,p;
  cin >>r>>s>>p;
  string tt ;
  cin >>tt;
  vector <char> t(n);
  vector <string> u(n);
  vector <char> ans(n);
  rep(i,n)t.at(i) = tt[i];
  ll sumpoint = 0;


  //k回までは勝つ手を出していく
  for(int i = 0;i<k;++i){
    ans.at(i)=ah(t.at(i),i);
    sumpoint = gp(ans.at(i),sumpoint,r,s,p);

  }
//k回目以降
  for (int i = k;i<n;i++){
    //k回前の手が出したい手と違うときは出したい手を出す
    if(ans.at(i-k)!=ah(t.at(i),i) ||ans.at(i-k)=='n'){
      ans.at(i)=ah(t.at(i),i);
      sumpoint =gp(ans.at(i),sumpoint,r,s,p);
      continue;
    }
    //ここからはk回前と手がかぶってしまったとき
    //未来をみる必要はない
    //適宜適当な手が出されると考えれば、ただかぶったときは点が入らないと考えればよい 
    ans.at(i) ='n';
  }
  cout <<sumpoint<<endl;

}
