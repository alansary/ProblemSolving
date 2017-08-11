#include <stdio.h>
#include <algorithm>
using namespace std;
int main() {
    int numCoins;
    scanf("%d", &numCoins);
    int values[numCoins];
    int total = 0;
    for (int i = 0; i < numCoins; i++) {
	scanf("%d", &values[i]);
	total += values[i];
    }
    sort(values, values+numCoins);
    int num_coins = 0, mySum = 0;
    int i = numCoins-1;
    while (mySum <= total/2) {
	num_coins++;
	mySum += values[i--];
    }
    printf("%d\n", num_coins);
    return 0;
}
