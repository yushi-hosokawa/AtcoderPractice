#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

//Prime factorization

//int型numを素因数分解した時のxの数(xはnumに何回かかっているか)
int pf_x(int num,int x){
  int ans =0;
  while(num%x==0){//numをxで割った時、もう割れなかったら0を返すようになってるね
    ans += 1;
    num /= x;
  }
  return ans;
}

//配列のi番目に素因数分解したiの個数
//配列の番号iと素因数分解したiの個数を一致させるために配列の個数を一つ増やして定義する
//配列と素因数分解したい数を渡す
void pf_all(vector<int> &vec ,int num){
  int n =num;
  for (int i = 2; i <= n; i++) {
    while (num%i==0) { // 素数で割り切れなくなるまで割っていく
      vec.at(i) +=1; //割った個数を配列に足す
      num /= i;
    }
  }
}

vector<int> Eratosthenes( const int N )
{
    std::vector<bool> is_prime( N + 1 );
    for( int i = 0; i <= N; i++ )
    {
        is_prime[ i ] = true;
    }
    std::vector<int> P;
    for( int i = 2; i <= N; i++ )
    {
        if( is_prime[ i ] )
        {
            for( int j = 2 * i; j <= N; j += i )
            {
                is_prime[ j ] = false;
            }
            P.emplace_back( i );
        }
    }
    return P;
}

//mapで要素数を取得する
//mapには存在する素因数のみが格納される
//計算量は上の関数と変わりません
//素因数をkey その数をvalueとして返す
void pf (map<int,int> &mp,int num){
  int n =num;
  for (int i = 2; i <= n; i++) {
    int ans = 0;
    while (num%i==0) { // 素数で割り切れなくなるまで割っていく
      ans+=1; //割った個数を配列に足す
      num /= i;
    }
    if(ans)mp[i] = ans;
  }
}

//素数であるかどうかを判定。boolを返す
bool IsPrime(int num)
{
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false; // 偶数はあらかじめ除く

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0)
        {
            // 素数ではない
            return false;
        }
    }

    // 素数である
    return true;
}


//エラトステネスの篩を使って素数を見つける
//見つけた素数の値を


int main(){
  int n;
	cin >> n;
	vector<int> x(n + 1);//n+1個の配列を準備(配列を指すiと素因数分解結果の値を一致させるため。i =0,1は絶対ゼロ)

  int check =5; //素因数分解で素因数5の個数を確認
  int a = pf_x(n,5);
  cout <<a<<endl;

  pf_all(x,n);//その数の素因数を全て取得
  rep(i,n)if(x.at(i))cout<<i<<"の要素数 = "<<x.at(i)<<endl;
  cout<<endl;

  //全ての素因数をkey,その数をvalueとして出力
  map<int,int> mp;
  pf(mp,n);
  //全てのmapの数だけループを回す
  for(auto p : mp) cout<<p.first<<"の要素数 = "<<p.second<<endl;

}

//ちなみに6!とかに素因数nは何個あるかは次で求められる
/*
while(n){
  ans += n/5;
  n /= 5;
}
cout <<ans<<endl;
*/
//詳しくは http://drken1215.hatenablog.com/entry/2019/12/22/224100
