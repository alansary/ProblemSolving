#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int T;
    cin >> T;
    int X, Y;
    while (T--) {
	cin >> X >> Y;
	cout << X+Y << endl;
    }
    return 0;
}
