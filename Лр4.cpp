#include <iostream> 
#include <iomanip> 
#include "windows.h"

using namespace std;

int main()
{
	float Z, y, e;
	cout << "input y\n";
	cin >> y;
	Z = 1;
	for (int k = 1; k <= 10; k++) {
		Z = k + 2 * Z;
	}
	Z = log(y);
	cout << "Z=" << setprecision(4) << Z << endl;
	system("pause");
	return 0;

}



