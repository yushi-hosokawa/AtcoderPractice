#include <bits/stdc++.h>
using namespace std;


int main(){

  string dream = "dream";
  string dreamer = "dreamer";
  string erase = "erase";
  string eraser = "eraser";
  string S;
  cin >> S;
  string pading ="ppppp";
  S =pading + S;
  int counter = S.size() ;
  bool checker = true;
  string ans ="NO";
  while(checker){
    int roopchecker = checker;
    if(S.substr(counter-7,7) == dreamer){
      counter-=7;
    }
    if(S.substr(counter-6,6) == eraser){
      counter-=6;

    }
    if(S.substr(counter-5,5) == dream){
      counter-=5;

    }
    if(S.substr(counter-5,5) == erase){
      counter-=5;
    }
    if(counter < 10 || roopchecker==checker){
      if (counter == 5){
        ans = "YES";
      }
    checker = false;
    }
  }
  cout <<ans<<endl;
}
