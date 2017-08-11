#include <stdio.h>
using namespace std;
int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    char c1, c2;
    bool colored = false;
    for (int i = 0; i < n*m; i++) {
	scanf("%c%c", &c1, &c2);
	if (c1 == 'C' || c1 == 'M' || c1 == 'Y' || c2 == 'C' || c2 == 'M' || c2 == 'Y') colored = true;
    }
    if (colored) printf("%s", "#Color\n");
    else printf("%s", "#Black&White\n");
    return 0;
}
