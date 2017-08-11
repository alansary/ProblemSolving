#include<iostream>
using namespace std;
int main() {
    short H1, M1, H2, M2, minutes = 0;
    while (cin >> H1 >> M1 >> H2 >> M2) {
	if ((H1 == 0) && (M1 == 0) && (H2 == 0) && (M2 == 0))
	    break;
	if ((H2 - H1) < 0 || ((H2 == H1) && (M2 <= M1))) H2 += 24;
	if ((H2 > H1) && (M2 < M1)) {
	    M2 += 60;
	    H2 -= 1;
	}
	minutes = (M2 - M1) + (H2 - H1) * 60;
	cout << minutes << endl;
    }
    return 0;
}
