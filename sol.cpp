#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long n, m;
		cin >> n >> m;
		vector<long long> p(n);
		for (int i = 0; i < n; i++) {
			cin >> p[i];
		}
		// sort the sequence in non-increasing order
		sort(p.rbegin(), p.rend());;
		long long meatballs = 0;
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			if (meatballs >= m) {
				// if 'meatballs' is greater than or equal to 'm', then break the loop
				break;
			}
			// otherwise, add the current no. of meatballs in the 'meatballs' variable
			meatballs += p[i];
			// increment 'cnt'
			cnt++;
		}
		// check if 'meatballs' is greater than or equal to 'm'
		cout << (meatballs >= m ? cnt : -1) << '\n';
	}
	return 0;
}
