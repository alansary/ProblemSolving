#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    /* Basic Idea:
     * Input: 31 && Output: 5
     * 1 2 4 8 16 32Canceled
     * 1 2 4 8 16Canceled
     * 1 2 4 8Calceled
     * 1 2 4Canceled
     * 1 (Odd)
     */
    int x;
    cin >> x;
    int worms = 0, selected = 0;
    if (x % 2 != 0) {
	selected++; x--;
    }
    while (worms != x) {
        int start = 1;
        while (start * 2 <= x - worms) {
	    start *= 2;
        }
	worms += start;
	selected++;
    }
    cout << selected << endl;
    return 0;
}
