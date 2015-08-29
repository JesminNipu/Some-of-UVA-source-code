#include <iostream>
#include <algorithm>
#include <set>
#include <cmath>
using namespace std;

int main(void) {
  int tc, c, r,t,q;
  set<int> v;
	set<int>::iterator it;
  cin >> tc;

  for (t = 0; t < tc; t++) {
    cin >> c >> r;

    v.clear();

    cout << "Case #" << t+1 << ":";

    if (c == r) {
      cout << " 0" << endl;
      continue;
    }

    q = c - r;

    for (int i = 1; i <= sqrt(q); i++) {
      if (q % i == 0) {
        if (i > r)
          v.insert(i);

        if (q / i > r)
          v.insert(q/i);
      }
    }

    for ( it = v.begin(); it != v.end(); it++)
      cout << " " << *it;
    cout << endl;
  }

  return 0;
}
