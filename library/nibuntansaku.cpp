#include <bits/stdc++.h>
#define rep(i,n) for (int i= 0;i<(n);++i)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;



//二分探索はx に関する「条件」がある。以下のことがわかっているときに、条件を満たす最小の x を見つけたいというときに使える

//vector<int> a = {1, 14, 32, 51, 51, 51, 243, 419, 750, 910};

// index が条件を満たすかどうか
bool isOK(vector vec,int index, int key) {
    if (vec[index] >= key) return true;
    else return false;
}

// 汎用的な二分探索のテンプレ
int binary_search(vector vec ,int key) {
    int left = -1; //「index = 0」が条件を満たすこともあるので、初期値は -1
    int right = (int)vec.size(); // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()

    /* どんな二分探索でもここの書き方を変えずにできる！ */
    while (right - left > 1) {
        int mid = left + (right - left) / 2;

        if (isOK(vec,mid, key)) right = mid;
        else left = mid;
    }

    /* left は条件を満たさない最大の値、right は条件を満たす最小の値になっている */
    return right;
}

int main() {
    vector <int> a ={1, 14, 32, 51, 51, 51, 243, 419, 750, 910};
    cout << binary_search(a,51) << endl; // a[3] = 51 (さっきは 4 を返したが今回は「最小の index」なので 3)
    cout << binary_search(a,1) << endl; // a[0] = 1
    cout << binary_search(a,910) << endl; // a[9] = 910

    cout << binary_search(a,52) << endl; // 6
    cout << binary_search(a,0) << endl; // 0
    cout << binary_search(a,911) << endl; // 10 (場外)
}
