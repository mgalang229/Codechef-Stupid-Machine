#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long n, x;
		cin >> n >> x;
    // view the image in this repository for better understanding
		long long ans = x;
		for (int i = 1; i < n; i++) {
			long long q;
			cin >> q;
			// choose the maximum number of tokens that we can insert based on the capacity of the previous boxes
			x = min(q, x);
			ans += x;
		}
		cout << ans << '\n';
	}
	return 0;
}
