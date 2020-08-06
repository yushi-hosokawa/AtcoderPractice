#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
//これむずくね
vector <string> split(string str, char del){
  int first = 0;
  int last =str.find_first_of(del);

  vector <string> result;

  while(first<str.size()){
    string subStr(str,first ,last - first);

    result.push_back(subStr);

    first = last +1;
    last = str.find_first_of(del,first);

    if(last == std::string::npos){
      last = str.size();
    }
  }

  return result;
}


int main(){
string str = "computer Nurtures computer scientists and highly-skilled computer engineers who will create and exploit knowledge for the new era Provides an outstanding computer environment END_OF_TEXT";
char del = ' ';

for (const auto subStr:split (str,del)){
  cout <<subStr<<endl;

}

return 0;

}
