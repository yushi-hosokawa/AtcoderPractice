#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  map<string,int> days;
  days["SUN"]= 7;
  days["MON"]= 6;
  days["TUE"]= 5;
  days["WED"]= 4;
  days["THU"]= 3;
  days["FRI"]= 2;
  days["SAT"]= 1;
  string s;
  cin>> s;
  cout<<days.at(s)<<endl;
}
