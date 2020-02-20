#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<char,int> P;

//ヒープソートは安定、選択ソートは安定でないから、ヒープソートと一致しない時は安定でない
void isStable(vector <P>b,vector<P>s,int n){
  int flag =0;
  rep(i,n)if((b.at(i)).first != (s.at(i)).first)flag = 1;
  if(flag)cout<<"Not Stable"<<endl;
  else cout<<"stable"<<endl;
}

void print(vector <P>x , int n){
  rep(i,n){
    if(i)cout<<" ";
    cout <<x.at(i).first<<x.at(i).second;
  }
  cout<<endl;
}

void bubbleSort(vector <P> &c,int n){
  for (int i =0; i<n;++i){
    for (int j =n-1; j>i;j--){
      if((c.at(j)).second<(c.at(j-1)).second) swap(c.at(j),c.at(j-1));
    }
  }
}

void selectionSort(vector <P> &b, int n){
  int counter =0;
  for(int i=0;i<n;i++){

    int minj = i;
    for(int j =i;j<n;j++){
      if(b.at(j).second < b.at(minj).second){
        minj = j;
      }
    }
    swap(b.at(i) ,b.at(minj));
    if(i == minj)counter++;
  }
}

int main(){
  int n;
  cin >>n;
  vector <string> a(n);
  rep(i,n)cin>>a.at(i);
  vector <P> b(n),c(n);
  rep(i,n){
    char x = (a.at(i)).at(1);
    int y = x -'0';
    b.at(i) =make_pair((a.at(i)).at(0),y);
    c.at(i) =make_pair((a.at(i)).at(0),y);
    //cout <<i<<"番目:"<<" b.at(i).first ="<<b.at(i).first<<" b.at(i).second ="<<b.at(i).second<<endl;

  }
  bubbleSort(c,n);
  print(c,n);
  cout<<"Stable"<<endl;




  selectionSort(b,n);
  print(b,n);
  isStable(c,b,n);



}
