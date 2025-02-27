#include"Queue.h"
#include<iostream>
using namespace std;
Queue::Queue() {
	count = 0;
	front = 0;
	rear = 0;
}
int Queue::IsEmpty() {
	return(count == 0);
}
int Queue::IsFull() {
	return (count == maxQue);
}
void Queue::Insert(ItemType newItem) {
	if (IsFull())
		cout << "Overflow";
	else {
		items[rear] = newItem;
		rear = (rear + 1) % maxQue;
		++count;
	}
}
void Queue::Remove(ItemType& item) {
	if (IsEmpty())
		cout << "Under Flow";
	else {
		item = items[front];
		front = (front + 1) % maxQue;
		--count;
	}
}
void Queue::Display(ItemType& item) const{
	cout << front;
}