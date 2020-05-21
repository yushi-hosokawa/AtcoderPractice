#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  ll n ;
  ll k ;
  cin >>n>>k;
  vector<ll> a(n);
  vector<ll> p,m,z;

  rep(i,n){
    cin>>a.at(i);
    if(a.at(i)<0)m.push_back(a.at(i));
    if(a.at(i)==0)z.push_back(a.at(i));
    if(a.at(i)>0)p.push_back(a.at(i));
  }
  ll count_p,count_m,count_z;
  count_m = m.size()*p.size();
  count_z = z.size()*m.size()+z.size()*p.size()+m.size()*(m.size()-1)/2;
  count_p = (n*(n-1))/2 - count_m - count_z;
  cout<<count_m<<" : "<<count_z<<" : "<<count_p<<endl;
  sort(m.begin(),m.end());
  sort(p.begin(),p.end());

  ll l = -le18 -l11;
  ll r = 0;
  while(l<r){
    ll c = (l+r)/2; //lとrの真ん中(比較する値)
    ll sum = 0;
    ll j = count_p -1;

    for(ll i = m.size()-1;i >=0;i--){
      while (j>=0 && m.at(i)*p.at(j) <=c)j--;
      sum += count_p - 1 - j;
    }
    cout <<sum <<" "<<c<<endl;
    if(sum < K )l = c;
    else r = c;

  }

}

//全部正ならこれでいいはず
/*
ll n ;
ll k ;
cin >>n>>k;
vector<ll> a(n);
rep(i,n)cin>>a.at(i);
sort(a.begin(),a.end());
int roop = 0;
int checker = 0;
for(int i =n-1;i>0;--i){

  checker+=i;
  if(k<=checker){
    ll x =a.at(roop);
    ll y = a.at(roop + (i- (checker-k)));
    cout <<x*y<<endl;
    break;
  }
  ++roop;
}
*/
