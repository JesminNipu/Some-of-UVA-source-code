#include <cstdio>
#include <vector>
using namespace std;

int main() {
	int n, m, N,V, k;
	vector<vector<int> > v;
	while (scanf("%d %d", &n, &m) != EOF) {
		v.assign(1000000, vector<int>());

		for (int i = 1; i <= n; i++) {
			scanf("%d", &N);
			v[N].push_back(i);
		}

		for (int i = 0; i < m; i++) {
			scanf("%d %d", &k, &V);

				if ( v [V].size () < k ) printf ("0\n");
            
			else printf ("%d\n", v [V] [k - 1]);
		}
	}

	return 0;
}
