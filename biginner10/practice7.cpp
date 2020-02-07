#include <bits/stdc++.h>
using namespace std;
int main(){
  int N;
  int a[110];
  int counter=1;
  cin >> N;

  for(int i = 0;i<N;++i)cin >>a[i];
  sort(a,a+N ,greater<int>());
  for(int i = 0;i<N-1;++i){
    if(a[i]-a[i+1]!=0) counter+=1;
  }
  cout <<counter<<endl;
}
