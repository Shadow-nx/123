#include <iostream>
using namespace std;
int main() {
	int n, m, k;
	cin >> n;
	cin >> m;
	cin >> k;
	int a[n][m];
	int b[m][k];
	int c[n][k];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			cin >> b[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			c[i][j] = 0;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			for (int s = 0; s < m; s++) {
				c[i][j] += a[i][s] * b[s][j];
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << c[i][j] << " ";
		}
	}
	return 0;
}
