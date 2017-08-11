#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main() {
    /* Laws:
     * s = v0*t + .5*a*t*t
     * v = v0 + a*t
     * v*v = v0*v0 + 2*a*s
     * Where,
     *  s is the displacement dx = xf-xi in meters,
     *  v0 is the initial speed in m/s,
     *  v is the final speed in m/s,
     *  t is change in time dt = tf-ti in seconds,
     *  a is the acceleration dv/dt in (m/s)/s.
     */
    short c;
    double i1, i2, i3, i4, i5;
    int caseNum = 0;
    while (cin >> c) {
	if (c == 0) break;
	cin >> i1 >> i2 >> i3;
	caseNum++;
	if (c == 1) {
	    i5 = (i2-i1) / i3; // a
	    i4 = i1 * i3 + .5 * i5 * i3 * i3; // s
	}
	else if (c == 2) {
	    i5 = (i2 - i1) / i3; // t
	    i4 = i1 * i5 + .5 * i3 * i5 * i5; // s
	}
	else if (c == 3) {
	    i4 = sqrt(i1 * i1 + 2 * i2 * i3); // v
	    i5 = (i4 - i1) / i2; // t
	}
	else if (c == 4) {
	    i4 = sqrt(i1 * i1 - 2 * i2 * i3); // u
	    i5 = (i1 - i4) / i2; // t
	}
        cout << "Case " << caseNum << ": " << setprecision(3) << fixed << i4 << ' ' << i5 << endl;
    }
    return 0;
}
