#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  double deg = 30.0;                   /* ３０度 */
double  pi, unit_r;

pi     = 2.0 * asin(1.0);
unit_r = 180.0 / pi;
  double a,b,x;
  cin>>a>>b>>x;
  double max_d =a*b*a;
  double tan_theta;
  double theta;
  tan_theta =2*(max_d-x)/(a*a*a);
  theta =atan(tan_theta)*unit_r;
  cout<<fixed<<setprecision(10)<<theta<<endl;

}
