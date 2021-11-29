#pragma once
#include <iostream>
#include <cassert>
#include "Node.h"
#include "LinkedList.h"
using namespace std;

template<class T>
class PriorityQueue : public LinkedList<T>
{
private:
	LinkedList<T> List;
public:
	void Push(T NewData, int priority)
	{
		//Node<T>* NewNode = new Node<T>;
		//NewNode->SetData(NewData);
		//NewNode->SetPriority(priority);
		//Node<T>* Pointer = new Node<T>;
		//Pointer = List.Front();
		//if (List.Front() == nullptr)
		//{
		//	List.SetRoot(NewNode);
		//	List.SetSize(List.GetSize() + 1);
		//	return;
		//}
		////if (Pointer->GetPriority() >= priority)
		////{
		////	Node<T>* tempNode = new Node<T>;
		////	tempNode = Pointer;
		////	List.SetRoot(NewNode);
		////	List.Front()->SetNext(tempNode);
		////	return;
		////}
		//for (int i = 0; i < List.GetSize(); i++)
		//{
		//	if (Pointer->GetPriority() >= priority)
		//	{
		//		List.operator[](i)->SetNext(NewNode);
		//	}
		//	else
		//	{
		//		Pointer = Pointer->GetNext();
		//	}
		//}
		//List.SetSize(List.GetSize() + 1);

		Node<T> NewNode = new Node<T>;
	}

};