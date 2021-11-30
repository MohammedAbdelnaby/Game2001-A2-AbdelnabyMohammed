#include <iostream>
#include "LinkedList.h"
#include "PriorityQueue.h"

using namespace std;

int main()
{
	PriorityQueue<int> test;
	test.Push(9, 2);
	test.Push(10, 5);
	test.Push(1, 1);
	test.Push(102, 3);
	test.Push(103, 4);
	for (int i = 1; i < test.GetSize(); i++)
	{
		cout << "YES" << endl;
		cout << test[i]->GetData() << endl;
	}
}