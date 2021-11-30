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
	QueueList.Push(103, 6);
	cout << "Testing pushing to queue:" << endl;
	for (int i = 0; i < QueueList.GetSize(); i++)
	{
		cout << "(" << QueueList[i]->GetData() << " , " << QueueList[i]->GetPriority() << ")" << endl;
	}


	cout << "----------------------------------" << endl;

	cout << "Testing pop and pushing to queue:" << endl;
	QueueList.Pop();
	QueueList.Pop();
	QueueList.Push(102, 10);
	QueueList.Push(18, 1);
	QueueList.Push(90, 1);

	for (int i = 0; i < QueueList.GetSize(); i++)
	{
		cout << "(" << QueueList[i]->GetData() << " , " << QueueList[i]->GetPriority() << ")" << endl;
	}

	cout << "----------------------------------" << endl;

	cout << "Testing Front() and GetLast()" << endl;

	cout << "Front of the queue: " << "(" << QueueList.Front()->GetData() << " , " << QueueList.Front()->GetPriority() << ")" <<
		" Last of the queue: " << "(" << QueueList.GetLast()->GetData() << " , " << QueueList.GetLast()->GetPriority() << ")" << endl;
}