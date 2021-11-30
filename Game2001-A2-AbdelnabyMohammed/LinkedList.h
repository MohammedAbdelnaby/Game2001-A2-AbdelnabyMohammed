#pragma once
#include <iostream>
#include <cassert>
#include "Node.h"
using namespace std;

template<class T>
class LinkedList
{
protected:
	int size;
	Node<T>* Root;
	Node<T>* Last;
public:
	LinkedList()
	{
		//Node<T>* test = new Node<T>;
		//Node<T>* next = new Node<T>;
		//test->SetData(a);
		//next->SetData(4);
		//Root = new Node<T>;
		//Root = test;
		//Root->SetNext(next);
		Root = new Node<T>;
		Last = new Node<T>;
		Root = nullptr;
		Last = nullptr;
		size = 0;

	}
	Node<T>* Front()
	{
		if (Root == nullptr)
		{
			cout << "No Root" << endl;
			return nullptr;
		}
		return Root;
	}
	void Pop()
	{
		assert(Root != nullptr);

		if (Root->GetNext() == nullptr)
		{
			delete Root;
			Root = nullptr;
		}
		else
		{
			Node<T> *temp = new Node<T>;
			temp = Root->GetNext();
			delete Root;
			Root = nullptr;
			Root = temp;
			if (size != 0)
			{
				size--;
			}
		}
	}
	Node<T>* operator[](int index)
	{
		if (index < 0)
		{
			cout << "ERROR INDEX OUT OF BOUNDS" << endl;
			system("pause");
		}
		Node<T>* pointer = new Node<T>;
		pointer = this->Front();

		for (int i = 0; i < index; i++)
		{

			pointer = pointer->GetNext();
		}
		return pointer;
	}
	void operator=(Node<T>* node)
	{

	}
	int GetSize()
	{
		return size;
	}
	void SetSize(int x)
	{
		size = x;
	}
	void SetRoot(Node<T>* node)
	{
		Root = node;
	}
	Node<T>* GetLast()
	{
		return Last;
	}
	void SetLast(Node<T>* node)
	{
		Last = node;
	}
};