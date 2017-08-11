#include<stdio.h>
#include<iostream>
using namespace std;

int main() {
    long int hsl, osl, diff;
    while (cin >> hsl >> osl) {
	if (hsl > osl) diff = hsl - osl;
	else diff = osl - hsl;
	printf("%ld\n", diff);
    }
    return 0;
}
