#include<stdlib.h>
#include"stack.h"
#include<iostream>
using namespace std;
Stack::Stack(){
	top = -1;
}
int Stack::IsEmpty()const {
	return(top == -1);
}
int Stack::IsFull()const {
	return (top == MAX_ITEMS - 1);
}
void Stack::Push(ItemType newItem) {
	if (IsFull()){
		cout << "stack overflow" << endl;
		exit(1);
	}
	top++;
	items[top] = newItem;
}
void Stack::Pop(ItemType& item) {
	if (IsEmpty()) {
		cout << "stack uunderflow" << endl;
		exit(1);
	}
	item = items[top];
	top--;
}
void Stack::Peek(ItemType& item) {
	if (IsEmpty()) {
		item = items[top];
		cout << item << endl;
	}
	else {
		cout << "stack is empty" << endl;
	}
}
string Stack::Reverse(const string& s) {
	Stack tempstack;
	string reversed = "";

	for (int i = 0; i < s.length(); i++) {
		tempstack.Push(s[i]);
	}
	while (!tempstack.IsEmpty()) {
		ItemType item;
		tempstack.Pop(item);
		reversed += char(item);
	}
	return reversed;
}