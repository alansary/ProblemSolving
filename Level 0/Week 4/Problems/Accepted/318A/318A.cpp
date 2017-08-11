#include <iostream>
using namespace std;
int main() {
    long long n, k;
    cin >> n >> k;
    if (n % 2 == 0) { // Even Number
	if (k <= n / 2) // Check Odd
	    cout << (k*2)-1 << endl;
	else { // Check Even
	    k -= n/2;
	    long long result = k*2;
	    cout << result << endl;
	}
    }
    else { // Odd Number
	if (k <= ((n/2)+1)) // Check Odd
	    cout << k*2-1 << endl;
	else { // Check Even
	    k -= (n/2+1);
	    long long result = k*2;
	    cout << result << endl;
	}
    }
    return 0;
}
