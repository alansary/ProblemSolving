#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::sort;
using std::vector;
using std::pair;

bool compare_function(pair <int, pair <int, int> > i, pair < int, pair <int, int> > j) {
    // 1st sort according to smaller modulo
    // 2nd sort according to odd first then comes even
    // 3rd sort according to longer odd precede smaller odd
    // 3rd sort according to smaller even precede longer even
    if (i.second.first < j.second.first) return true;
    else if (i.second.first > j.second.first) return false;
    else { // i.second.first == j.second.first
        if (i.second.second > j.second.second) return true;
	else if (i.second.second < j.second.second) return false;
        else { // i.second.second = j.second.second
	    if (i.first % 2 != 0) { // Odd number
	        if (i.first > j.first) return true;
	        else return false;
	    }
	    else { // Even number
	        if (i.first < j.first) return true;
	        else return false;
	    }
        }
    }
}

int main() {
    int n, m;
    while ((cin >> n >> m) && (n != 0 && m != 0)) {
	vector < pair <int, pair <int, int> > > data;
	for (int i = 0; i < n; i++) {
	    // pair <input_num, pair <modulo, odd vs. even> >
	    int temp_num;
	    cin >> temp_num;
	    pair <int, pair <int, int> > temp_pair;
	    temp_pair.first = temp_num;
	    temp_pair.second.first = temp_num % m;
	    // 1 represents odd and 0 represents even
	    temp_pair.second.second = (temp_num % 2 == 0) ? 0 : 1;
	    data.push_back(temp_pair);
	}
	sort(data.begin(), data.end(), compare_function);
	cout << n << ' ' << m << endl;
	for (int i = 0; i < data.size(); i++) {
	    cout << data[i].first << endl;
	}
    }
    cout << "0 0" << endl;
    return 0;
}
