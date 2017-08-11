#include <iostream>
#include <algorithm>

using std::cout;
using std::cin;
using std::sort;

int main() {
    int testCases;
    cin >> testCases;
    int array[10];
    while (testCases--) {
	for (int i = 0; i < 10; i++)
	    cin >> array[i];
	sort(array, array+10);
	cout << array[1] << "\n";
    }
    return 0;
}
