#include <iostream>

using std::cout;
using std::cin;

int main() {
    int n;
    cin >> n;
    int total = 0;
    int temp;
    for (int i = 1; i <= n; i++) {
	cin >> temp;
	total += temp;
    }
    int win = 0;	
    int i = 1;
    for (; i <= 5; i++) {
	int temp_tot = total+i;
	temp_tot--;
	if ((temp_tot % (n+1)) != 0) win++;
    }
    cout << win << "\n";
    return 0;
}
