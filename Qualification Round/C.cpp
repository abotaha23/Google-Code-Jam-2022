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
    int n; cin >> n;
    vector <int> d(n);
    for (auto &i : d) cin >> i;
    sort(d.begin(), d.end());
    int ans = 0, cur = 1;
    for (auto &i : d) {
        if (i < cur) continue;
        cur++;
        ans++;
    }
    cout << ans;
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