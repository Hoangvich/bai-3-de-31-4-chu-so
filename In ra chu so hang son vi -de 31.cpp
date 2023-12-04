#include<iostream>

using namespace std;

int main()
{
	int n;
	cout << "Nhap vao mot so có 4 chu so: " << endl;
	cin >> n;
	
	if(n < 1000 || n >> 9909)
	{
		cout << "Chu so vua nhap khong hop le" << endl;
		return 1;
	}
	int don_vi_chu_so = n % 10;
	cout << "Chu so hang don vi la" << " " << don_vi_chu_so << endl;
	
	return 0;
}