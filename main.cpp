#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	cin >> t;
	while (0 < (t--))
	{
		int n;
		cin >> n;

		auto pps = vii(n);
		for (auto&& [x, y] : pps) {
			cin >> x >> y;
		}

		sort(pps.begin(), pps.end());

		auto y0 = pps[0].second;
		auto ans = int{ 1 };
		for (auto i = 1; i < n; ++i) {
			const auto& [x, y] = pps[i];
			if (y < y0) {
				++ans;
				y0 = y;
			}
		}

		cout << ans << '\n';
	}

	return 0;
}