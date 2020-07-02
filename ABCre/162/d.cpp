#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main(){
    int n;cin>>n;
    string s;cin>>s;
    int len =s.size();
    vector<char> x (n+1);
    rep(i,n)x[i+1]=s[i];
    vector<int> a(4);
    map<char ,int> mp;
    mp['R']=1;
    mp['G']=2;
    mp['B']=3;
    rep(i,n){
        a[mp[s[i]]]++;
    }
    ll sum = a[1]*a[2]*a[3];
    ll notsum = 0;
    //中央の数字の移動を示す
    for(int i =2;i<len;++i){
        //幅の大きさ
        for(int j =1;j<n;++j){
            if(i+2*j>=n) continue;
            //cout<<x[i]<<x[i+1]<<x[i-1]<<endl;
            if(x[i]!=x[i-j]&&x[i]!=x[i+j]&&x[i+j]!=x[i-j]){
                notsum++;
            }
        }
    }
    cout<<sum-notsum<<endl;

}