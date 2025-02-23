#include<iostream>
#include<iomanip>
using namespace std;
int Power(int X, int N) {
	if (N == 0)
		return 1;
	else return Power(X, N - 1) * X;
}
int main() {
	cout << "N   | 2^N (using Power(2, I))" << endl;
	cout << "-------------------------------" << endl;
	for (int I = 0; I <= 20; I++) {
		cout << setw(2) << I << "  |  " << setw(12) << Power(2, I) << endl;
	}
	return 0;
}
