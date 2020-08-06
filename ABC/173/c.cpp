#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


int main(){
    int h,w,k;cin>>h>>w>>k;
    int final =0;
    vector<vector<int>> data(6, vector<int >(6));
    rep(i,h){
        rep(j,w) {
            char sss;
            cin >> sss;
            if(sss=='#')data[i][j]=1;
            else data[i][j] = 0;
        }
    }
    vector<int> wl(6);
    vector<int> hl(6);
    int count =0;
    rep(i,h){
        rep(j,w){
            hl[i]+=data[i][j];
            count+=data[i][j];
        }
       // cout<<hl[i]<<endl;

    }
    rep(i,w){
        rep(j,h){
            wl[i]+=data[j][i];

        }
      //  cout<<wl[i]<<endl;
    }



    for (int tmp = 0; tmp < (1 << h); tmp++) {
        set<int> hh;
        ll ans= count;
        bitset<6> s(tmp);
       // cout<<s<<endl;
        if(s.test(0)){
            ans-=hl[0];
            hh.insert(0);
            //cout<<"one"<<endl;
        }
        if(s.test(1)){
            ans-=hl[1];
            hh.insert(1);
           // cout<<"two"<<endl;
        }
        if(s.test(2)){
            ans-=hl[2];
            hh.insert(2);
        }
        if(s.test(3)){
            ans-=hl[3];
            hh.insert(3);
        }
        if(s.test(4)){
            ans-=hl[4];
            hh.insert(4);
        }
        if(s.test(5)){
            ans-=hl[5];
            hh.insert(5);
        }


        for (int tmp2 = 0; tmp2 < (1 << w); tmp2++) {
            set<int> ww;
            bitset<6> s2(tmp2);
            int ans2 =ans;

            if(s2.test(0)){
                ans2-=wl[0];
                ww.insert(0);
            }
            if(s2.test(1)){
                ans2-=wl[1];
                ww.insert(1);
            }
            if(s2.test(2)){
                ans2-=wl[2];
                ww.insert(2);
            }
            if(s2.test(3)){
                ans2-=wl[3];
                ww.insert(3);
            }
            if(s2.test(4)){
                ans2-=wl[4];
                ww.insert(4);
            }
            if(s2.test(5)){
                ans2-=wl[5];
                ww.insert(5);
            }
            for(auto itr = hh.begin();itr!=hh.end();++itr){
                for(auto itr2 = ww.begin();itr2!=ww.end();++itr2){
                    ans2+=data[*itr][*itr2];
                }
            }

            if(ans2==k)final++;

            }
        }


    cout<<final<<endl;

}