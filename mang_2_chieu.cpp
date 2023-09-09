#include <iostream>
using namespace std;
int main(){
    int SO_HANG = 0;
    int SO_COT = 0;
    int sum = 0;
    cout << "SO HANG =";
    cin >> SO_HANG;
    cout << "SO COT =";
    cin >> SO_COT;
    int arr[SO_HANG][SO_COT];
    for (int i = 0;i < SO_HANG;i++){
        for (int j = 0;j < SO_COT;j++){
            cout << "arr["<<i<<"]["<<j<<"]";
            cin >> arr[i][j];
            sum += arr[i][j];
        }
    }
    cout << sum;
    return 0;
}