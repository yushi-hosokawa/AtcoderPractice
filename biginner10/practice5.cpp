#include <bits/stdc++.h>
using namespace std;

//各桁の数値を求めるときには１０のあまりを計算、10で割るを繰り返すのがよい

int findSumOfDigits(int n){
  int sum = 0;
  while (n>0){
    sum += n%10;
    n/=10;
  }
  return sum;
}
int main(){
  int n,a,b;
  cin >> n >> a >> b;
  int total= 0 ;

  for(int i=1;i<=n;i++){
    int SumOfDigits = findSumOfDigits(i);
    if(SumOfDigits>=a &&SumOfDigits<=b)total+=i;
  }
  cout<<total<<endl;
}
