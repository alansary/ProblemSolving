#include<iostream>
using namespace std;
int main() {
    short t;
    int n;
    cin >> t;
    for (int i = 0; i < t; i++) {
	cin >> n;
	n *= 567;
	n /= 9.0;
	n += 7492;
	n *= 235;
	n /= 47.0;
	n -= 498;
	n /= 10;
	if (n < 0) n *= -1;
	cout << n % 10 << endl;
    }
    return 0;
}
