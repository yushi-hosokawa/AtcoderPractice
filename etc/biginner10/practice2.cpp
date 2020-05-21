#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s ;
  int counter = 0;
  int counter2 = 0;

  if (s[0] == '1') ++counter;
  if (s[1] == '1') ++counter;
  if (s[2] == '1') ++counter;
  cout <<counter<<endl;
  size_t size = s.length();
  int sizeint =int(size);
  cout <<"size_tの値" <<size <<"intに直したあと:"<< sizeint <<endl;

  for (int i = 0 ;i < sizeint; ++i ){
    if (s[i] == '1') ++counter2;
  }
  cout <<"for文counterの値:"<<counter2<<endl;

//型の確認方法
  cout << typeid(size).name() << endl;
  cout << typeid(sizeint).name() << endl;

}
