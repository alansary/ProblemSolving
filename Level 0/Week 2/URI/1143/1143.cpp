#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int n;
    cin >> n;
    int val = 1;
    for (int i = 0; i < n; i++) {
	//lines
	cout << val << ' ' << val*val << ' ' << val*val*val << endl;
	val++;
    }
    return 0;
}
