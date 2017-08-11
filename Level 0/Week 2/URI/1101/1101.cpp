#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int n, m;
    while ((cin >> n >> m) && (n > 0) && (m > 0)) {
	if (n > m) {
	    int temp = n; n = m; m = temp;
	}
	int sum = 0;
	for (int i = n; i <= m; i++) {
	    cout << i << ' ';
	    sum += i;
	}
	cout << "Sum=" << sum << endl;
    }
    return 0;
}
