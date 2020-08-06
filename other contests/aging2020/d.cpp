#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


int main(){
    int n ;cin>>n;
    string x;cin>>x;
    ll count = 0;
    ll gen = 0;
    for(int i = 0;i<n;++i){
        if(x[i]=='1'){
            count++;
            gen+=pow(2,n-i-1);
        }
    }
    for(int i =0;i<n;i++){
        int ans=gen;
        int ncount = count;
        if(x[i]=='0'){
            ans+=pow(2,n-i-1);
            ncount+=1;
        }
        else{
            ans-=pow(2,n-i-1);
            ncount-=1;
        }

        while (ans!=0){
            ans%=ncount;
            

        }

    }

}