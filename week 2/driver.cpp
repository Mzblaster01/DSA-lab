#include<iostream>
#include"stack.h"
using namespace std;
int main() {
	Stack s;
	int item;
	for (int i = 0;i < 20;i++)
		s.Push(i);
	for (int i = 0;i < 20;i++) {
		s.Pop(item);
		cout << item << endl;
	}
	s.Peek(item);

	Stack a;

	string original = "Radar";
	string reversed = a.Reverse(original);

	cout << "Original: " << original << endl;
	cout << "Reversed: " << reversed << endl;

	return 0;
}