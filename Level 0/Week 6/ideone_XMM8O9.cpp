#include <bits/stdc++.h>
using namespace std;



int main()
{
    char str[15][15];
    char operation[15];
    int arr[15][15];
    int tmp[15][15];
    int t;
    cin >> t;
    for(int T = 1 ; T <= t ; T++){
        int n , m , a , b;
        cin >> n;

        //scan the matrix
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                cin >> str[i][j];
            }
        }

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                // change the character to integer
                arr[i][j] = str[i][j] - '0';
            }
        }

        cin >> m;

        for(int k = 0 ; k < m ; k++){
            cin >> operation;
            if(operation[0] == 't'){
                //transpose
                for(int i = 0 ; i < n ; i++){
                    for(int j = 0 ; j < n ; j++){
                        tmp[i][j] = arr[i][j];
                    }
                }

                for(int i = 0 ; i < n ; i++){
                    for(int j = 0 ; j < n ; j++){
                        arr[i][j] = tmp[j][i];
                    }
                }
            }else if(operation[0] == 'r'){
                // row a b
                cin >> a >> b;
                a--;
                b--;

                for(int i = 0 ; i < n ; i++)
                    swap(arr[a][i] , arr[b][i]);
            }else if(operation[0] == 'c'){
                //col a b
                cin >> a >> b;
                a--;
                b--;

                for(int i = 0 ; i < n ; i++)
                    swap(arr[i][a] , arr[i][b]);

            }else if(operation[0] == 'i'){
                // inc
                for(int i = 0 ; i < n ;i++){
                    for(int j = 0 ; j < n ; j++){
                        arr[i][j]++;
                        if(arr[i][j] == 10)
                            arr[i][j] = 0;
                    }
                }
            }else{
                // dec
                for(int i = 0 ; i < n ; i++){
                    for(int j = 0 ; j < n ; j++){
                        arr[i][j]--;
                        if(arr[i][j] == -1)
                            arr[i][j] = 9;
                    }
                }
            }
        }

        //After finishing operations

        cout << "Case #"<< T << endl;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                cout << arr[i][j];
            }
            cout << endl;
        }

        //Print a blank line after each case (even after the very last one)
        cout << endl;

    }


    return 0;
}
