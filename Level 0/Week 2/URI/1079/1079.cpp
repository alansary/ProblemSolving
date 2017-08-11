#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::fixed;

int main() {
    int N;
    cin >> N;
    while (N--) {
	double first, second, third;
	cin >> first >> second >> third;
	cout << setprecision(1) << fixed << ((first*2+second*3+third*5)/10) << endl;
    }
    return 0;
}
