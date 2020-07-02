#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

//string→intはstoi
string snum = "1234";
int inum =stoi(snum);

//char→intはatoi
char cnum = '9';
int inum=atoi(cnum);

//int→stringはto_string
snum=to_string(inum);

//一文字を扱う時はとにかくchar
//とにかくcharとstringは大小比較できない
int main(){
  string x = "abcdefg";
    cout <<x.at(1)<<" : "<<x.at(2)<<endl;
  if(x.at(1)>x.at(2))cout <<"big"<<endl;
  if(x.at(1)<x.at(2))cout <<"small"<<endl;
  pair<char,char> y;
  y = make_pair(x.at(1),x.at(2));
  cout <<y.first<<" : "<<y.second<<endl;
  if(y.first>y.second)cout <<"big"<<endl;
  if(y.first<y.second)cout <<"small"<<endl;
  if(x.at(2)!=y.first)cout <<"toobig"<<endl;
  if(x.at(2)==y.first)cout <<"toosmall"<<endl;



  string xx ="a";//stringは参照型
  //変数が持っているのは参照情報（実体がどこにあるのかという情報）だけ。実体は別の場所に確保される。

  char yy ='a';//charは値型
  //変数に直接値が格納される。

  string ww ="b";
  //string zz = xx.at(0); //charでないのでエラー
  char zz =xx.at(0);
  cout <<"xx="<<xx<<" yy="<<yy<<" zz="<<zz<<endl;
  //if(xx>zz)cout<<"tinpo"<<endl;//string とcharなのでエラー
  if(yy==zz)cout <<"tinpo"<<endl;

  //string st ='a'; //初期値にcharを入れるとエラー
  string st;
  st ='a'; //charを代入だと許される

  cout <<st +"bcd"+'e'<<endl;//charの足算もおっけー



  //結論、string と charの比較はNG
  //stringが一文字でもダメ
  //比較したいならstringの方を char　a =st.at(0)とかでcharとして値を取ってくる必要がある
  //string,charどうしなら比較可能



}
