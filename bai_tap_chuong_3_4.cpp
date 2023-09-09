#include <iostream>
using namespace std;
int main()
{
    int n;
    bool kt_nt = true;
    cout << "N = ";
    cin >> n;
    for (int i = 2 ; i < n - 1 ; i++){
        if (n%i == 0){
            kt_nt=false;
            break;
        }
    }
    if(kt_nt){
        cout << n << " la so nguyen to ";
    } else {
        cout << n << " khong phai la so nguyen to ";
    }
    return 0;
}