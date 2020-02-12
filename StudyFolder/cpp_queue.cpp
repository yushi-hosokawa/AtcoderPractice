#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  queue<int> q1;

  q1.push(1);
  q1.push(2);
  q1.push(3);
  cout<<"先頭:"<<q1.front()<<"最後:"<<q1.back()<<endl;

  //全出力
  while(!q1.empty()){
    cout<<q1.front()<<endl;
    q1.pop();
  }

  // 使うならvectorで良さそう
  vector<int> vec5;
  vec5.push_back(1);
  vec5.push_back(2);
  cout<<vec5[1]<<endl;


/*
  stack<int> s1;
  s1.push(1);
  s1.push(2);
  s1.push(3);
  cout<<"先頭:"<<s1.front()<<"最後:"<<s1.back()<<endl;
  */
}
