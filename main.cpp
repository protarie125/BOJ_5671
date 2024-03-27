#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vd = vector<double>;
using vii = vector<pii>;
using vll = vector<pll>;
using vs = vector<string>;

using vvb = vector<vb>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using vvd = vector<vd>;

ll n, m;

bool IsDupe(ll x) {
  if (x < 10) {
    return false;
  }

  auto s = set<ll>{};
  while (0 < x) {
    const auto& z = x % 10;
    if (s.find(z) == s.end()) {
      s.insert(z);
    } else {
      return true;
    }

    x /= 10;
  }

  return false;
}

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  while (cin >> n >> m) {
    auto ans = 0LL;
    for (auto i = n; i <= m; ++i) {
      if (!IsDupe(i)) {
        ++ans;
      }
    }
    cout << ans << '\n';
  }

  return 0;
}