#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int T;
    cin >> T;
    int N, K;
    while (T--) {
	int count = 0;
	cin >> N >> K;
	int num_candies;
	while (N--) {
	    cin >> num_candies;
	    count += (num_candies/K);
	}
	cout << count << endl;
    }
    return 0;
}
