#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    int result = 0;
    //if (((a+b)+c) > result) result = (a+b)+c;
    //if (((a*b)*c) > result) result = (a*b)*c;
    if (((a+b)*c) > result) result = (a+b)*c;
    //if (((a*b)+c) > result) result = (a*b)+c;
    //if ((a+(b+c)) > result) result = a+(b+c);
    //if ((a*(b*c)) > result) result = a*(b*c);
    //if ((a+(b*c)) > result) result = a+(b*c);
    if ((a*(b+c)) > result) result = a*(b+c);
    if (a+b+c > result) result = a+b+c;
    if (a*b*c > result) result = a*b*c;
    if (a+b*c > result) result = a+b*c;
    if (a*b+c > result) result = a*b+c;
    cout << result << endl;
    return 0;
}
