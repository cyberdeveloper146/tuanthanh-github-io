#include <iostream>
using namespace std;
int main()
{
    int n, numbers[10];
    int sum = 0;
    // Viết code ở đây
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> numbers[i];
        sum += numbers[i];
    }
    cout << sum;
    return 0;
}
