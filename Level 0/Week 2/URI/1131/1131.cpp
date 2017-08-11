#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int response = 1;
    int Inter, Gremio;
    int InterWins = 0, GremioWins = 0, Draws = 0, GRENAIS = 0;
    while (response == 1) {
	cin >> Inter >> Gremio;
	if (Inter > Gremio) InterWins++;
	else if (Gremio > Inter) GremioWins++;
	else Draws++;
	GRENAIS++;
	cout << "Novo grenal (1-sim 2-nao)" << endl;
	cin >> response;
    }
    cout << GRENAIS << " grenais" << endl;
    cout << "Inter:" << InterWins << endl;
    cout << "Gremio:" << GremioWins << endl;
    cout << "Empates:" << Draws << endl;
    if (InterWins > GremioWins)
	cout << "Inter venceu mais" << endl;
    else if (GremioWins > InterWins)
	cout << "Gremio venceu mais" << endl;
    else cout << "Não houve vencedor" << endl;
    return 0;
}
