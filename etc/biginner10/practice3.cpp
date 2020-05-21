#include <bits/stdc++.h>
using namespace std;
int main(){
  int N;
  int A[200];
  cin >>N;
  for (int i =0; i < N;++i) cin >>A[i];
  bool cheaker =true;
  int counter = 0;


  for(int i = 0; i <N ; ++i) {
    if (A[i]%2 == 1) cheaker =false;
  }

  while (cheaker){
    counter++;
    for(int j = 0 ; j<N ; ++j) {
      A[j] /=2;
      if (A[j] %2 == 1) cheaker =false;
    }

  }

  cout <<counter<< endl;


}
