#include <bits/stdc++.h>
 
using namespace std;

struct Ram {
	int takes = 0;
	int add = 0;
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k;
		cin >> n >> k;
		vector<Ram> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i].takes;
		}
		for (int i = 0; i < n; i++) {
			cin >> a[i].add;
		}
		// sort the sequence based on the value that they will subract from the current value of k
		sort(a.begin(), a.end(), [](const Ram& x, const Ram& y) {
			return x.takes < y.takes;
		});
		for (int i = 0; i < n; i++) {
			if (k >= a[i].takes) { // keep adding more RAM until it is less than the value that needs to be taken
				k += a[i].add;
			}
		}
		cout << k << '\n';
	}
	return 0;
}
