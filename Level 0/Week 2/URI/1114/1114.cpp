#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int n;
    cin >> n;
    while (n != 2002) {
	cout << "Senha Invalida" << endl;
	cin >> n;
    }
    cout << "Acesso Permitido" << endl;
    return 0;
}
