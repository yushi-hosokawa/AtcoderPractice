#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
    int S;
    cin >>S;
    int h ,m, s;
    h =S/3600;
    S -= (3600*h);
    m  = S/60;
    S -= 60*m;
    cout<<h<<":"<<m<<":"<<S<<endl;
}
