#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
	for (int j = 1; j <= 2; j++) {
	    cout << i << ' ';
	    if (j == 1)
		cout << i*i << ' ' << i*i*i << endl;
	    else
		cout << i*i+1 << ' ' << i*i*i+1 << endl;
	}
    }
}
