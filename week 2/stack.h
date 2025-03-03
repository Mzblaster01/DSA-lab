#pragma once
#include <string>
using namespace std;

#define MAX_ITEMS 100
typedef int ItemType;

class Stack {
public:
	Stack();
	int IsEmpty() const;
	int IsFull() const;
	void Push(ItemType newItem);
	void Pop(ItemType& item);
	void Peek(ItemType& item);
	string Reverse(const string& s);

private:
	int top;
	ItemType items[MAX_ITEMS];
};