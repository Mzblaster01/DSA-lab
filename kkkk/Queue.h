#pragma once
#define maxQue 100
typedef int ItemType;
class Queue
{
private:
	ItemType items[maxQue];
	int front, rear, count;
public:
	Queue();
	int IsEmpty();
	int IsFull();
	void Insert(ItemType newItem);
	void Remove(ItemType& item);
	void Display(ItemType& item)const;
};



