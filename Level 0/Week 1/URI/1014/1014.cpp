#include<stdio.h>
using namespace std;
int main() {
    int total_distance;
    double spent_fuel;
    scanf("%d", &total_distance);
    scanf("%lf", &spent_fuel);
    printf("%.3lf km/l\n", total_distance/spent_fuel);
    return 0;
}
