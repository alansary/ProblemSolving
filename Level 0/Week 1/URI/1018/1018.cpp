#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int n;
    cin >> n;
    cout << n << endl;
    int banknotes[7] = {100, 50, 20, 10, 5, 2, 1};
    for (int i = 0; i < 7; i++) {
	int count = 0;
	while (n >= banknotes[i]) {
	    n -= banknotes[i];
	    count++;
	}
	cout << count << " nota(s) de R$ " << banknotes[i] << ",00" << endl;
    }
    return 0;
}
