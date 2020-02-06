#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,a,b;
  cin >> n >> a >> b;
  int total= 0 ;
  for(int i = 0;i <= b && i<10; i++){
    for(int j= 0; i+j<=b && j<10; j++){
      for(int k = 0; i+j+k<=b && k<10; k++){
        for(int l = 0; i+j+k+l<=b && l<10; l++){
          if((1000*l +100*k +10*j +i)<=n &&(i+j+k+l) >=a)total += 1000*l +100*k +10*j +i;
        }
      }
    }
  }
  cout <<total<<endl;
}
