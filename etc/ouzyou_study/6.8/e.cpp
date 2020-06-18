#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
    int n,m;cin>>n>>m;
    vector<int> a(n);
    rep(i,n)cin>>a.at(i);
    vector<int> b(m);
    rep(i,m)cin>>b.at(i);
    bool ans = false;

    if(n<m){
        cout<<"NO"<<endl;
        return 0;
    }
    sort(a.begin(),a.end(),greater<int>());
    sort(b.begin(),b.end(),greater<int>());
    //部屋の番号
    int i = 0;
    for(int j =0;i<=n;++i){
        //もし団体客が全員埋まったら
        if(j==m){
            ans =true;
            break;
        }
        //もし部屋が客より大きいとき
        if(a[i]>=b[j]){
            j++;
            continue;
        }
        else{
            break;
        }


    }
    if(ans)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;




}
