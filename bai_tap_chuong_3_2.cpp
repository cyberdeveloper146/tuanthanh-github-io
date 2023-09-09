#include <iostream>
using namespace std;
int main()
{
    int n;
    int s = 0;
    cout << "n=";
    cin >> n;
    if (n <= 100){
        for(int i = 1 ; i <= n ; i++){
            if(i%2==1){
                s+=i;
            }
        }
    }
    cout << s;
    return 0;
}