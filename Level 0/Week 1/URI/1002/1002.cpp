#include<stdio.h>
using namespace std;
int main() {
    // A = PI * R * R
    // PI = 3.14159
    double R;
    const double PI = 3.14159;
    scanf("%lf", &R);
    printf("A=%.4lf\n", PI * R * R);
    return 0;
}
