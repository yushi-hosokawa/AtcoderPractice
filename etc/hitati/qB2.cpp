#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  int na,nb,nm;
  cin >> na >> nb >> nm;
  //cout<<na<<"  "<<nb<<"  "<<nm<<endl;
  vector <int> a(nm);
  rep(i,na)cin>>a.at(i);

  vector <int> b;
  rep(i,nb)cin>>b.at(i);

  vector <int> m(nm);


  rep(i,nm){
    int xa,xb,c;
    cin>>xa>>xb>>c;
    xa-=1;
    xb-=1;
    m.at(i) =a.at(xa)+b.at(xb)-c;
  }


  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  sort(m.begin(),m.end());
  int x = a.at(0)+b.at(0);
  int y = m.at(0);
  int ans = min(x,y);

  return 0;
}
