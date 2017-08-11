#include <iostream>
#include <utility>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::pair;

int main() {
    int n;
    cin >> n;
    vector < pair <int, int> > data;
    for (int i = 0; i < n; i++) {
	int temp_required, temp_price;
	cin >> temp_required >> temp_price;
	pair <int, int> temp_pair;
	temp_pair.first = temp_required;
	temp_pair.second = temp_price;
	data.push_back(temp_pair);
    }
    int paid_money = 0;
    for (int i = 0; i < data.size(); ) {
	int current_price = data[i].second;
	int up_to_index = data.size();
	for (int j = i+1; j < data.size(); j++) {
	    if (data[j].second < current_price) {
		up_to_index = j;
		break;
	    }
	}
	for (int j = i; j < up_to_index; j++) {
	    paid_money += (data[j].first * current_price);
	    i++;
	}
	if ((i == data.size()) || (up_to_index == data.size())) break;
    }
    cout << paid_money << endl;
    return 0;
}
