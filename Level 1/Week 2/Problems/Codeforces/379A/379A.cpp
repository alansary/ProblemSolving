#include <stdio.h>
using namespace std;
int main() {
    int candles, make;
    scanf("%d%d", &candles, &make);
    int counter = candles;
    while (candles / make != 0) {
	counter += (candles/make);
	candles = (candles/make) + (candles%make);
    }
    printf("%d\n", counter);
    return 0;
}
