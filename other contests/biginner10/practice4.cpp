#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  int a,b,c;

  cin >> a >> b >> c;
  cin >>n;

  int sum = 0;
  int checker = 0;

  for (int i = 0 ; i <= a; ++i ){
    for(int j = 0 ; j<= b; ++j){
      for(int k = 0 ; k<= c; ++k){
        sum = 500*i +100*j + 50*k;
        if(sum == n) checker++;
      }
    }
  }
  cout <<checker<<endl;
}
