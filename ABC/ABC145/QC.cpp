#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;


int main(){
  int n;
  cin >>n;
  vector<int> x(n);
  vector<int> y(n);
  rep(i,n)cin>>x.at(i)>>y.at(i);
  vector<int> vec;
  for(int i =0;i<n;++i){
    vec.push_back(i);
  //  cout<<i<<endl;
  }

  double result = 0;
  double counter = 0;
  do{
    counter += 1.0;
    double sum = 0;
      for(int j=1; j<n; j++){
//        cout<<j<<endl;
        double dist =hypot(x.at(vec.at(j))-x.at(vec.at(j-1)),y.at(vec.at(j))-y.at(vec.at(j-1)));
//        cout<<vec.at(j);
        sum+=dist;
      }
//      cout<<endl;
//      cout<<sum<<endl;
      result += sum;
//      cout<<endl;
  }while(next_permutation(vec.begin(),vec.end()));

  result/=counter;
  cout<<setprecision(11)<<result<<endl;




}
