#include<string>
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    string name;
    cin >> name;
    double fixed_salary;
    cin >> fixed_salary;
    double sales;
    cin >> sales;
    double total_salary = fixed_salary + (15 * sales) / 100;
    cout << "TOTAL = R$ " << setprecision(2) << fixed << total_salary << endl;
    return 0;
}
