#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int Alcohol = 0, Gasoline = 0, Diesel = 0;
    int value;
    while (true) {
	value = 0;
	while ((value != 1) && (value != 2) && (value != 3) && (value != 4))
	    cin >> value;
	if (value == 1)
	    Alcohol++;
	else if (value == 2)
	    Gasoline++;
	else if (value == 3)
	    Diesel++;
	else if (value == 4)
	    break;
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << Alcohol << endl;
    cout << "Gasolina: " << Gasoline << endl;
    cout << "Diesel: " << Diesel << endl;
    return 0;
}
