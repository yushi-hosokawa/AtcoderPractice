#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  int n,m,q;
  cin >>n>>m>>q;
  vector<vector<int>> data(q,vector<int>(4));
  // 入力 (2重ループを用いる)
   for (int i = 0; i < 3; i++) {
     for (int j = 0; j < 4; j++) {
       cin >> data.at(i).at(j);
     }
   }


}
