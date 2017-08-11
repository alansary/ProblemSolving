#include <iostream>

using std::cout;
using std::cin;

int main() {
    int n;
    cin >> n;
    if (n >= 0) cout << n << "\n";
    else {
	if (n/10 == 0) cout << "0\n";
	else if (n/100 == 0){
	    n *= -1;
	    if (n%10 < n/10) cout << -1*(n%10) << "\n";
	    else cout << -1*(n/10) << "\n";
	}
	else {
	    n *= -1;
	    int first_digit = n % 10;
	    int second_digit = ((n%100)-first_digit)/10;
	    if (first_digit == second_digit) cout << (-1*n)/10 << "\n";
	    else if (first_digit > second_digit) cout << (-1*n)/10 << "\n";
	    else {
		n /= 100;
		n *= 10;
		n += first_digit;
		n *= -1;
		cout << n << "\n";
	    }
	}
    }
    return 0;
}
