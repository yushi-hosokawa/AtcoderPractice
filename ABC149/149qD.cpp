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
  map<string ,char> mp;
  mp["rs"] = 'p';
  mp["pr"] = 's';
  mp["ps"] = 'r';

  for(int i = 0;i<k;++i){
    ans.at(i)=ah(t.at(i),i);
    sumpoint = gp(ans.at(i),sumpoint,r,s,p);

  }

  for (int i = k;i<n;i++){
    if(ans.at(i-k)!=ah(t.at(i),i)){
      ans.at(i)=ah(t.at(i),i);
      sumpoint =gp(ans.at(i),sumpoint,r,s,p);
      continue;
    }
    //ここからはk回前と手がかぶってしまったとき
    if(i>(n-k)){
      ans.at(i) = t.at(i);//未来予想必要ない後半部分除外
      continue;
    }
    char mirai =ah(t.at(i+k),i);
    //未来の手と前の手ともちかうものを出す手とする
    if(mirai !=ans.at(i-k)){
      string final;
      final += mirai;
      final += ans.at(i-k);
      sort(final.begin(),final.end());
      ans.at(i) = mp[final];
    }else {
      ans.at(i) =t.at(i);
    }

  }
//  rep(i,n) cout <<ans.at(i)<<endl;
  cout <<sumpoint<<endl;

}
