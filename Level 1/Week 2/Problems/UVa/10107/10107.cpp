#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int arr[10000];
    int count = 0;
    while (cin >> arr[count++]) {
	sort(arr, arr+count);
	if (count % 2 == 0)
	    cout << (arr[count/2]+arr[count/2-1])/2 << endl;
	else
	    cout << arr[count/2] << endl;
    }
    return 0;
}
