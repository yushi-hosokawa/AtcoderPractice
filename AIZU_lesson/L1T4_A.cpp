#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
    int a,b;
    cin >>a>>b;
    int d,r;
    double f;
    d =a/b;
    r = a%b;
    f = (double)a/(double)b;
    printf("%d %d %.9lf",d,r,f);

}
