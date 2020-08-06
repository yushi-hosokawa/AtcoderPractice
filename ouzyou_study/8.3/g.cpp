#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const long long INF = 1LL << 60;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
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


int main(){
    int n = 100;



}