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
    int cols[4][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) cin >> cols[j][i];
    }
    for (auto &i : cols) sort(i, i+3);
    int acc = 0;
    int ans[4] = {0};
    for (int i = 0; i < 4; i++) {
        if (acc == 1e6) continue;
        int add = cols[i][0];
        add = min((int)1e6-acc, add);
        acc+=add;
        ans[i] = add;
    }
    if (acc < 1e6) cout << " IMPOSSIBLE";
    else for (auto &i : ans) cout << ' ' << i;
}

int main()
{
    AboTaha_on_da_code

/*    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/

    int t = 1; cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case #" << i << ":";
        burn();
        cout << '\n';
    }
    return 0;
}