#include <iostream>
#include <chrono>
#include <string>
#include <sstream>
#include <cmath>
#include <iomanip>
#include <cstring>
#include <string>
#include <algorithm>
#include <array>
#include <vector>
#include <deque>
#include <set>
#include <bitset>
#include <unordered_set>
#include <map>
#include <queue>
#include <stack>

using namespace std;

typedef long long ll;
#define AboTaha_on_da_code ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define X first
#define Y second

const int dx[8]={0, 0, 1, -1, 1, -1, -1, 1}, dy[8]={1, -1, 0, 0, 1, -1, 1, -1};
const int M = 1e9+7, M2 = 998244353;
// const double EPS = 1e-8;

void burn()
{
    ll n, k; cin >> n >> k;
    int str, stp; cin >> str >> stp;
    ll sure = stp, avg = stp;
    vector <bool> vis(n+1, false);
    vis[str] = true;
    int cnts = 0;
    int kk = k;
    while(k) {
        for (int j = 1; j <= n; j++) {
            if (vis[j]) continue;
            cout << "T " << j << endl;
            int node, passages;
            cin >> node >> passages;
            avg+=passages;
            sure+=passages;
            cnts++;
            vis[node] = true;
            break;
        }
        k--;
        if (!k) continue;
        k--;
        cout << "W" << endl;
        int node, passages;
        cin >> node >> passages;
        if (vis[node]) continue;
        sure+=passages;
        cnts++;
        vis[node] = true;
    }
    cout << "E " << (ll)(sure+(double)(n-cnts)*((double)avg/(kk/2+1)))/2;
}

int main()
{
    // AboTaha_on_da_code

/*    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/

    int t = 1; cin >> t;
    for (int i = 1; i <= t; i++) {
        burn();
        cout << endl;
    }
    return 0;
}