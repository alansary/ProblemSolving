#include <iostream>

using std::cout;
using std::cin;

int main() {
    int testCases;
    cin >> testCases;
    int birth_year, birth_month, age_year, age_month;
    while (testCases--) {
	cin >> birth_year >> birth_month;
	cin >> age_year >> age_month;
	int current_month = birth_month + age_month;
	int current_year = birth_year + age_year;
	if (current_month > 12) {
	    current_month -= 12;
	    current_year++;
	}
	cout << current_year << ' ' << current_month << "\n";
    }
    return 0;
}
