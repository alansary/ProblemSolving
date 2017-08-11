#include <stdio.h>
using namespace std;
int main() {
    int n, m, multiple = 0, counter = 0;
    scanf("%d%d", &n, &m);
    while (n != 0) {
	n--;
	multiple++;
	counter++;
	if (multiple % m == 0) n++;
    }
    printf("%d\n", counter);
    return 0;
}
