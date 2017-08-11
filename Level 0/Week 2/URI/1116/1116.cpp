#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::fixed;

int main() {
    int x, y;
    int n;
    cin >> n;
    while (n--) {
	cin >> x >> y;
	if (y == 0) cout << "divisao impossivel" << endl;
	else {
	    cout << setprecision(1) << fixed << (double)x / y << endl;
	}
    }
    return 0;
}
