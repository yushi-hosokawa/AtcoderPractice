//https://atcoder.jp/contests/abc170/tasks/abc170_d
#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


const int M = 1000005;

//エラトステネスの篩
int main(){
    int n ;
    cin>>n;
    vector <int> a(n);
    rep(i,n) cin>>a.at(i);
    vector <int> cnt(M);
    for (int x: a){
        if(cnt[x] != 0){
            cnt[x] = 2;
            continue;
        }
        //入力された値の倍数をすべてcntに足す
        //4が入力にあったらcnt[4],cnt[8],cnt[12]...
        for(int i = x;i <M;i += x) cnt[i]++;

    }
    int ans = 0;
    for(int x : a){
        //入力の値のcntが1になっている。→その値を約数に持つものがない→回答に1足す
        if(cnt[x] == 1)ans++;

    }
    cout<<ans<<endl;
    return 0;

}
