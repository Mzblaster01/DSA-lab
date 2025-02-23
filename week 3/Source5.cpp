#include<iostream>
using namespace std;
void printnumbers(int n) {
	if (n < 0) {
		return;
	}
	cout << "" << n << "";
	printnumbers(n - 1);
}
int binomial(int n, int k) {
	if (n == 0 || k == 0)
		return 1;
	else return binomial(n - 1, k - 1) + (n - 1, k);
}
bool prime(int n, int d = 2) {
	bool flag;
	if (n % d == 0) {
		return 0;
	}
	else if (d == n - 1)
	{
		return 1;
	}
	else {

		flag = prime(n, d + 1);
	}
	return flag;
}

int main() {
	int n;
	cout << "Enter a number" << endl;
	cin >> n;
	printnumbers(n);
	cout << endl;
	cout << binomial(5, 2) << endl;
	cout << prime(9) << endl;
	return 0;
}
