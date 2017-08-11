#include <iostream>

using std::cout;
using std::cin;

int main() {
    // We can not kill more than 75% of the soldiers in three turns
    // 25% of the soldiers will die each turn
    int n;
    cin >> n;
    cout << n/2*3 << "\n";
    return 0;
}
