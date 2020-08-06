#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  int d[110];

  cin >> N;
  for(int i = 0;i<N;++i)cin >>d[i];
  set<int> a;
  for(int i = 0; i<N; ++i)a.insert(d[i]);
  cout << a.size() <<endl;

}
