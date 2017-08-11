#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[105] = {0};
    for(int i = 1 ; i < n ; i++)
        cin >> arr[i];

    int a , b , sum = 0;
    cin >> a >> b;
    for(int i = a ; i < b ; i++)
        sum += arr[i];

    cout << sum << endl;
    return 0;
}