#include <iostream>
#include "LinkedList.h"
#include "PriorityQueue.h"


using namespace std;

int main()
{
	PriorityQueue<int> QueueList;
	QueueList.Push(9, 2);
	QueueList.Push(10, 5);
	QueueList.Push(1, 1);
	QueueList.Push(102, 3);
	QueueList.Push(103, 4);
	for (int i = 0; i < QueueList.GetSize(); i++)
	{
		cout << QueueList[i]->GetData() << " , " << QueueList[i]->GetPriority() << endl;
	}


	cout << "----------------------------------" << endl;


	QueueList.Pop();
	QueueList.Pop();
	QueueList.Push(100, 10);
	QueueList.Push(8, 1);
	QueueList.Push(9, 1);

	for (int i = 0; i < QueueList.GetSize(); i++)
	{
		cout << QueueList[i]->GetData() << " , " << QueueList[i]->GetPriority() << endl;
	}
}