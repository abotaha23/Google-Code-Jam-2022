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

ll ans;
vector <int> f;
vector <vector <int>> adj;

int dfs(int cur = 0)
{
    if (adj[cur].empty()) return f[cur];
    vector <int> anss;
    for (auto &i : adj[cur]) anss.push_back(dfs(i));
    sort(anss.begin(), anss.end());
    for (int i = 1; i < anss.size(); i++) ans+=anss[i];
    anss.clear();
    return max(anss.front(), f[cur]);
}

void burn()
{
    int n; cin >> n;
    f.assign(n+1, 0);
    adj.assign(n+1, {});
    for (int i = 1; i <= n; i++)  cin >> f[i];
    for (int i = 1; i <= n; i++) {
        int p; cin >> p;
        adj[p].push_back(i);
    }
    ans = 0;
    cout << dfs()+ans;
}

int main()
{
    AboTaha_on_da_code

/*    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/

    int t = 1; cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case #" << i << ": ";
        burn();
        cout << '\n';
    }
    return 0;
}