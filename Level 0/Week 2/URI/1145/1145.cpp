#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int x, y;
    cin >> x >> y;
    int count = 0;
    for (int i = 1; i <= y; i++) {
	cout << i << ' ';
	count++;
	if (count % x == 0)
	    cout << endl;
    }
}
