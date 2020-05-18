#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  int n,m;
  cin>>n>>m;
  set <int> count_all;//出てくるものすべてを足したやつ
  set <int> count_no;
  vector<int> h(n);

  rep(i,n){
    cin>>h.at(i);
  }



  for(int j = 0 ;j<m ; j++){
    int a;
    int b;
    cin>>a>>b;
    a-=1;
    b-=1;
    count_all.insert(a);
    count_all.insert(b);
    int c;
    if(h.at(a)==h.at(b)){
      count_no.insert(a);
      count_no.insert(b);
    }
    else if(h.at(a)<h.at(b)){
      count_no.insert(a);
    }
    else {
      count_no.insert(b);
    }
  }
  cout<<(n-count_all.size())+(count_all.size()-count_no.size())<<endl;


}
