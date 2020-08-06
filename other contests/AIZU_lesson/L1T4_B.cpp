#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
    double r;
    cin >>r;
    double a, b;
    a = 2* M_PI *r;
    b = r*M_PI*r;
    printf("%.6lf %.6lf",a,b);
}
