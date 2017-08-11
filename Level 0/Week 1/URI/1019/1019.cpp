#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int n;
    cin >> n;
    int hours = n / (60*60);
    n -= hours*(60*60);
    int minutes = n / 60;
    n -= minutes * 60;
    int seconds = n;
    cout << hours << ":" << minutes << ":" << seconds << endl;
    return 0;
}
