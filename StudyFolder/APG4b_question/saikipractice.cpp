//むずスギィ

/*問題文
あなたはA社を経営する社長です。 A社はN個の組織からなり、それぞれに0番からN−1番の番号が付いています。 0番の番号が付いた組織はトップの組織です
組織間には親子関係があり、0番以外のN−1
個の組織には必ず1つの親組織があります。 子組織は複数になることがあります。 また、それぞれの組織は直接的または間接的にトップの組織と関係があるものとします。

あなたは全ての組織に報告書を提出するように求めました。
混雑を避けるために、「各組織は子組織の報告書がそろったら、自身の報告書を加えて親組織に送る」ことを繰り返します。 子組織が無いような組織は自身の報告書だけをすぐに親組織に送ります。

ある組織から報告書を送ってから、その親組織が受け取るときにかかる時間を1分とします。
あるタイミングで一斉に報告書の伝達を開始したときに、トップの組織の元に全ての組織の報告書が揃う時刻（伝達を始めてから何分後か）を求めてください。 なお、各組織の報告書は既に準備されているため、報告書の伝達以外の時間はかからないこととします。

制約
1≤N≤50
0≤pi<i(1≤i≤N−1)*/

//botu回答

#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
/*
int ans(vector<int> &data,int x){

if(data.at(x) ==0){
  return 1;
}

int s= ans(data,data.at(x));
  return s+1;
}



int main(){
  int n;
  cin >> n;
  vector <int> p(n);
  rep (i,n) cin >>p.at(i);
  int longer =0;
  rep(i,n){
    int hop=ans(p,p.at(i)); //hop数を返す
    longer =max(longer,hop);
    cout <<longer;
  }
}
*/

//回答
#include <bits/stdc++.h>
using namespace std;

// x番の組織について、子組織からの報告書が揃う時刻を返す
// childrenは組織の関係を表す2次元配列(参照渡し)
int complete_time(vector<vector<int>> &children, int x) {
  // ベースケース
  if (children.at(x).size() == 0) {
    return 0;  // 子組織が無いような組織について、報告書が揃う時刻は0
  }

  // 再帰ステップ
  int max_receive_time = 0;  // 受け取った時刻の最大値
  // x番の組織の子組織についてループ
  for (int c : children.at(x)) {

    // (子組織 c のもとに揃った時刻 + 1) の時刻に c からの報告書を受け取る
    int receive_time = complete_time(children, c) + 1;

    // 受け取った時刻の最大値 = 揃った時刻 なので最大値を求める
    max_receive_time = max(max_receive_time, receive_time);
  }
  return max_receive_time;
}

// これ以降の行は変更しなくてよい

int main() {
  int N;
  cin >> N;

  vector<int> p(N);  // 各組織の親組織を示す配列
  p.at(0) = -1;  // 0番組織の親組織は存在しないので-1を入れておく
  for (int i = 1; i < N; i++) {
    cin >> p.at(i);
  }

  // 組織の関係から2次元配列を作る
  vector<vector<int>> children(N);  // ある組織の子組織の番号一覧
  for (int i = 1; i < N; i++) {
    int parent = p.at(i);  // i番の親組織の番号
    children.at(parent).push_back(i);  // parentの子組織一覧にi番を追加
  }

  // 0番の組織の元に報告書が揃う時刻を求める
  cout << complete_time(children, 0) << endl;
}
