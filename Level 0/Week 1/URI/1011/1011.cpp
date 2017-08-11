#include<stdio.h>
using namespace std;
int main() {
    // The formula to calculate the volume is: (4.0/3) * PI * R * R * R
    // PI = 3.14159
    int R;
    const double PI = 3.14159;
    scanf("%d", &R);
    printf("VOLUME = %.3lf\n", (4.0/3) * PI * R * R * R);
    return 0;
}
