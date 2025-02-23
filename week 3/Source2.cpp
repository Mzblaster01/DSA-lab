#include<iostream>
#include<conio.h>
using namespace std;

int Ackermann(int m, int n) {
	if (m == 0)
		return n + 1;
	else if (m > 0 && n == 0)
		return Ackermann(m - 1, 1);
	else if (m > 0 && n > 0)
		return Ackermann(m - 1, Ackermann(m, n - 1));
}
int power(int X, int N) {
	if (N == 0)
		return 1;
	else
		return power(X, N - 1) * X;
}
int main() {
	cout << Power(3, 2) << endl;
	cout << Ackermann(3, 4) << endl;
	return 0;
}
