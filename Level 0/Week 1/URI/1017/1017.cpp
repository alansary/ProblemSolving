#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::fixed;

int main() {
    int hours, avg_speed;
    cin >> hours >> avg_speed;
    int distance = hours * avg_speed;
    double liters = distance / 12.0;
    cout << setprecision(3) << fixed << liters << endl;
    return 0;
}
