#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main(){

    int k;
    cin >> k;
    //全数字をkまでチェックしてたら時間的に間に合わない。（テストケースの例で最大値が10＾9超えてる）
    //ルンルン数だけを列挙していく実装していく
    //ルンルン数を前列挙することを考えられるかがポイント
    vector<ll> a;
    //一桁目を突っ込む
    for(int i = 1;i<=9;++i)a.push_back(i);
    //このwhile文が一周すると一桁増えた数字(10→99みたいな)が全てvectorの中にpush_buckされる
    while(1){
        if(k<=a.size()){
            cout<<a[k-1]<<endl;
            return 0;
        }
        k-=a.size();

        //oldには一桁すくないvectorが入る
        //oldは毎回初期化されているからaは毎回何もない状態になっている
        vector<ll> old;
        swap(old,a);
        for(ll x: old){
            //oldの要素一つ一つのうしろに一桁を追加
            for(int i = -1;i<=1;++i){
                int d =x%10+i;
                if(d<0||d>9)continue;
                ll nx = x*10+d;
                a.push_back(nx);

            }
        }
    }

}