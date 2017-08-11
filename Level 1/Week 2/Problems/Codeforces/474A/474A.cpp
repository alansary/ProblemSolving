#include <stdio.h>
using namespace std;
int main() {
    char Case;
    scanf("%c", &Case);
    char chars[101];
    scanf("%s", &chars);
    char sequence[] = "qwertyuiopasdfghjkl;zxcvbnm,./";
    int j, i = 0;
    char output[101];
    if (Case == 'R') {
        while (chars[i] != '\0') {
	    j = 0;
	    while (sequence[j] != chars[i]) {
		j++;
	    }
	    output[i] = sequence[--j];
	    i++;
        }
    }
    else {
	while (chars[i] != '\0') {
	    j = 0;
	    while (sequence[j] != chars[i]) {
		j++;
	    }
	    output[i] = sequence[++j];
	    i++;
	}
    }
    output[i] = '\0';
    printf("%s\n", output);
    return 0;
}
