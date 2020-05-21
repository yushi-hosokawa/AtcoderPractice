#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int bingocheck(vector<int> x,vector<int> y, int n)
{
    bool check1 = false;
    bool check2 = false;
    bool check3 = false;
    rep(i,n){
      if(x.at(0)==y.at(i))check1=true;
    }
    rep(i,n){
      if(x.at(1)==y.at(i))check2=true;
    }
    rep(i,n){
      if(x.at(2)==y.at(i))check3=true;
    }
    if(check1&&check2&&check3){
      //cout <<"1"<<endl;
      return 1;
    }

    else return 0;

}


int main(){
  vector<int> a01(3);
  vector<int> a02(3);
  vector<int> a03(3);

  rep(i,3){
    cin >>a01.at(i)>>a02.at(i)>>a03.at(i);
  }
  int n;
  cin>>n;
  vector<int> b;
  rep(i,n){
    int x;
    cin>>x;
    b.push_back(x);
  }
  vector<int> a10{a01.at(0),a02.at(0),a03.at(0)};
  vector<int> a20{a01.at(1),a02.at(1),a03.at(1)};
  vector<int> a30{a01.at(2),a02.at(2),a03.at(2)};
  vector<int> a13{a01.at(0),a02.at(1),a03.at(2)};
  vector<int> a31{a01.at(2),a02.at(1),a03.at(0)};
  bool check =false;

  vector<int> resalt(8);

  resalt.at(0)=bingocheck(a01,b,n);
  resalt.at(1)=bingocheck(a02,b,n);
  resalt.at(2)=bingocheck(a03,b,n);
  resalt.at(3)=bingocheck(a10,b,n);
  resalt.at(4)=bingocheck(a20,b,n);
  resalt.at(5)=bingocheck(a30,b,n);
  resalt.at(6)=bingocheck(a13,b,n);
  resalt.at(7)=bingocheck(a31,b,n);
  int sum = 0;
  rep(i,8){
    sum += resalt.at(i);
  }
  if(sum)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
}
