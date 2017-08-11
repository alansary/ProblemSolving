#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int n;
    cin >> n;
    int years = n / 365;
    n -= years*365;
    int months = n / 30;
    n -= months*30;
    int days = n;
    cout << years << " ano(s)" << endl;
    cout << months << " mes(es)" << endl;
    cout << days << " dia(s)" << endl;
    return 0;
}
