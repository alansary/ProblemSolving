#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[100005];
    int n , a = 0 , d = 0;
    cin >> n >> str;

    for(int i = 0 ; i < n ; i++){
        if(str[i] == 'A')
            a++;
        else
            d++;
    }

    if(a > d)
        cout << "Anton" << endl;
    else if(a < d)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;

    return 0;
}
