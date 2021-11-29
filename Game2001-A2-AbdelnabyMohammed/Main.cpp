#include <iostream>
#include "LinkedList.h"
#include "PriorityQueue.h"

using namespace std;

int main()
{
	PriorityQueue<int> test;
	test.Push(9, 1);
	test.Push(10, 2);
	for (int i = 0; i < test.GetSize(); i++)
	{
		cout << "YES" << endl;
		cout << test[i]->GetData() << endl;
	}
	//if (test.Front() == nullptr)
	//{
	//	cout << "HELP NE" << endl;
	//}
	//else
	//{
	//	cout << (test.Front()->GetData()) << endl;
	//}
	//test.Pop();
	//if (test.Front() == nullptr)
	//{
	//	cout << "HELP NE" << endl;
	//}
	//else
	//{
	//	cout << (test.Front()->GetData()) << endl;
	//}
}