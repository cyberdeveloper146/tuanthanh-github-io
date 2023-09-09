#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n=";
    cin >> n;
    int i = 1;
    int sum;
    while(i<=n){
        sum +=(n%10);
        n /=10;
    }
    cout << sum;
    return 0;
}
