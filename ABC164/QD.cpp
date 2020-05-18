#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  string s;
  cin>>s;
  int n = s.size();
  int count =0;

  for(int i =4;i<=n;++i){
    for(int j =0;j+i-1<n;j++){
      string str =s.substr(j,i);
      ll anstr =stoi(str);
      if(anstr%2019 == 0){
      //  cout<<j+1<<" "<<j+i<<endl;
        count++;
      }
    }
  }
  cout <<count<<endl;
}
