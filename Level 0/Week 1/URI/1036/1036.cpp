#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::fixed;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double discriminant = (b*b) - (4*a*c);
    if (discriminant < 0) {
	cout << "Impossivel calcular" << endl;
    }
    else {
	if (2*a == 0) {
	    cout << "Impossivel calcular" << endl;
	}
	else {
	    double R1 = ((-1*b) + sqrt(discriminant)) / (2*a);
	    double R2 = ((-1*b) - sqrt(discriminant)) / (2*a);
	    cout << "R1 = " << setprecision(5) << fixed << R1 << endl;
	    cout << "R2 = " << setprecision(5) << fixed << R2 << endl;
	}
    }
    return 0;
}
