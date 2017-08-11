#include <iostream>

using std::cout;
using std::cin;

int main() {
    int n, k;
    cin >> n >> k;
    int counter = 0;
    int num;
    while (n--) {
	int lucky_counter = 0;
	cin >> num;
	bool match = true;
	while (num/10 != 0) {
	    if (num%10 == 4 || num%10 == 7) {
		lucky_counter++;
		if (lucky_counter > k) {
		    match = false;
		    break;
		}
	    }
	    num /= 10;
	}
	if (num == 4 || num == 7) {
	    lucky_counter++;
	    if (lucky_counter > k) match = false;
	}
	if (match) counter++;
    }
    cout << counter << "\n";
    return 0;
}
