#include<stdio.h>
using namespace std;
int main() {
    int id, hours_worked;
    double sal_per_hour, total_salary;
    scanf("%d", &id);
    scanf("%d", &hours_worked);
    scanf("%lf", &sal_per_hour);
    total_salary = hours_worked * sal_per_hour;
    printf("NUMBER = %d\n", id);
    printf("SALARY = U$ %.2lf\n", total_salary);
    return 0;
}
