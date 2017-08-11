#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int N;
    cin >> N;
    while (N--) {
	int sum = 0;
	int x, y;
	cin >> x >> y;
	if (x > y) {
	    int temp = x; x = y; y = temp;
	}
	int i;
	for (i = x+1; i < y; i++) {
	    if (i % 2 != 0) sum += i;
	}
	cout << sum << endl;
    }
    return 0;
}
