#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::sort;

int main() {
    /* Specification:
     * k time unit for lunch
     * n resturants
     * i-th resturant has ti time for lunch
     * if ti > k, then joy = fi - (ti-k). Otherwise, joy = fi
     * Find the maximum value of joy.
     * Note that the joy value isn't necessarily a positive value.
     */
    /* Input:
     * 1 <= n <= 10^4 and 1 <= k <= 10^9
     * 1 <= fi <= 10^9 and 1 <= ti <= 10^9
     */
    /* Output:
     * The maximum joy value.
     */
    int n, k;
    cin >> n >> k;
    int joy[n];
    int f, t;
    for (int i = 0; i < n; i++) {
	cin >> f >> t;
	if (t > k) joy[i] = f - (t-k);
	else joy[i] = f;
    }
    sort(joy, joy+n);
    cout << joy[n-1] << endl;
    return 0;
}
