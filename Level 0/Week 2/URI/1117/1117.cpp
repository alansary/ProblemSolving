#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::fixed;

int main() {
    double value;
    double first_valid, second_valid;
    int count = 0;
    while (count != 2) {
	cin >> value;
	if ((value >= 0) && (value <= 10)) {
	    if (count == 0) {
		first_valid = value;
		count++;
	    }
	    else if (count == 1) {
		second_valid = value;
		count++;
	    }
	}
	else {
	    cout << "nota invalida" << endl;
	}
    }
    cout << "media = " << setprecision(2) << fixed << (first_valid+second_valid)/2 << endl;
    return 0;
}
