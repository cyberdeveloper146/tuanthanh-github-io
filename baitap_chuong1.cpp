#include <iostream>
using namespace std;
int main() 
{
	const int tuoi_cong_dan = 18;
	int tuoi;
	cout << " Nhap tuoi cua ban vao day : ";
	cin >> tuoi;
	if (tuoi >=tuoi_cong_dan) {
		cout << "Ban da du tuoi lam cccd";
	} else if(tuoi >= 16){
		cout << "Ban da du tuoi lam cccd";
	} else if(tuoi <= 10){
		cout << "Ban dang o tuoi tre con";
	} else {
		cout << "Ban chua du tuoi lam cccd";
	}
	return 0;
}