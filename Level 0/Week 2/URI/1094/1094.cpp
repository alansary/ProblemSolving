#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::fixed;

int main() {
    int N;
    cin >> N;
    int Coelho = 0, Rato = 0, Sapo = 0;
    while (N--) {
	int temp_count;
	char temp_char;
	cin >> temp_count >> temp_char;
	if (temp_char == 'C') Coelho += temp_count;
	else if (temp_char == 'R') Rato += temp_count;
	else if (temp_char == 'S') Sapo += temp_count;
    }
    int cobaias = Coelho + Rato + Sapo;
    cout << "Total: " << cobaias << " cobaias" << endl;
    cout << "Total de coelhos: " << Coelho << endl;
    cout << "Total de ratos: " << Rato << endl;
    cout << "Total de sapos: " << Sapo << endl;
    cout << "Percentual de coelhos: " << setprecision(2) << fixed << (double)Coelho/cobaias*100 << " %" << endl;
    cout << "Percentual de ratos: " << setprecision(2) << fixed << (double)Rato/cobaias*100 << " %" << endl;
    cout << "Percentual de sapos: " << setprecision(2) << fixed << (double)Sapo/cobaias*100 << " %" << endl;
    return 0;
}
