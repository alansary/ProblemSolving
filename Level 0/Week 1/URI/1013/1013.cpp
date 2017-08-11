#include<stdio.h>
#include<cmath>
using namespace std;
int main() {
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);
    int MaiorAB = (A+B+abs(A-B)) / 2;
    int MaiorAll = (MaiorAB+C+abs(MaiorAB-C)) / 2;
    printf("%d eh o maior\n", MaiorAll);
    return 0;
}
