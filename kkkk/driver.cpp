#include<iostream>
#include"Queue.h"

using namespace std;

int main() {
	

	Queue st;
	for (int i = 0; i < 10; i++) {
		st.Display(i);
		st.Insert(i);
	}
	for (int i = 0; i < 10; i++) {
		st.Display(i);
	   st.Remove(i);
	}
}