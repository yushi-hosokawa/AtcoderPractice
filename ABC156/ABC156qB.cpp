#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

//10進数をn進数で表示
//各位の桁をvectorに突っ込む例もある

int main(){
  int n, k ;
  cin>>n>>k;
  int keta  =0;
  vector <int> d;

  while(n>0){
    d.push_back(n%k);//下の桁から順番にpush_backされる
    n /= k;
    keta++;
  }
  for(auto itr = d.begin() ;itr!=d.end();itr++){
    cout<<*itr<<endl;
  }
  cout <<keta<<endl;
  return 0;

}
