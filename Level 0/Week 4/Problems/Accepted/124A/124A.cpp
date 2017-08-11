#include <iostream>

using std::cout;
using std::cin;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    // a or more in front of him && b or less behind him
    int pos = 0;
    for (int i = a; i < n; i++) {
	if (i+1 > n) break;
	for (int j = b; j >= 0; j--) {
	    if (i+1+j == n) pos++;
	    if (i+1+j < n) break;
	}
    }
    cout << pos << "\n";
    return 0;
}
