//
// Created by yushi hosokawa on 2020/05/30.
//

#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

//template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const long long INF = 1LL << 60;


int main(){
    string t;
    cin>>t;
    int tsize =t.size();
    string ansx ;

    vector <char> ans (tsize);
    char end =t.at(tsize-1);
    if(end =='?') {
        ans.at(tsize - 1) = 'D';
    }
    else ans.at(tsize-1) = end;

    for(int i=tsize-2;i>=0;--i){
        char x =t.at(i);
        char y = ans.at(i+1);
        cout<<i<<x<<y<<endl;
        if(x=='?'){
            if(y =='D'){
              ans.at(i)='P';
            }
            else ans.at(i) = 'D';

        }
        else{
            ans.at(i) = x;

        }
    }
    rep(i,tsize){
        ansx +=ans.at(i);
        cout <<ans.at(i)<<endl;
    }
    cout<<ansx<<endl;

}
