#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int max_cut = 0;
    for (int i = 0; i <= 4000; i++) {
	for (int j = 0; j <= 4000; j++) {
	    int temp = n - (i*a+j*b);
	    if ((temp >= 0) && (temp % c == 0)) {
		int k = temp / c;
		if ((i+j+k) > max_cut) max_cut = i+j+k;
	    }
	}
    }
    cout << max_cut << endl;
    return 0;
}
