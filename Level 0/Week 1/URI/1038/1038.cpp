#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::fixed;

int main() {
    double prices[6] = {0.00, 4.00, 4.50, 5.00, 2.00, 1.50};
    int x, y;
    cin >> x >> y;
    cout << "Total: R$ " << setprecision(2) << fixed << y*prices[x] << endl;
    return 0;
}
