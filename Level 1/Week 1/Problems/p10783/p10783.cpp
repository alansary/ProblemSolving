#include <iostream>
using namespace std;
int main() {
    short T;
    cin >> T;
    short a, b;
    short sum;
    for (int i = 1; i <= T; i++) {
	sum = 0;
	cin >> a;
	cin >> b;
	for (int x = a; x <= b; x++) {
	    if (x % 2 != 0) sum += x;
	}
	cout << "Case " << i << ": " << sum << endl;
    }
    return 0;
}
