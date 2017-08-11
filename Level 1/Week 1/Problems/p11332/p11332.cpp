#include<iostream>

int func(int n) {
    int sum = 0;
    while ((n / 10) != 0) {
	sum += n % 10;
	n = n / 10;
    }
    return sum + n;
}
using namespace std;

int main() {
    int n = -1;
    int result;
    while ((cin >> n) && (n != 0)) {
	result = func(n);
	while ((result / 10) != 0) result = func(result);
	cout << result << endl;
    }
    return 0;
}
