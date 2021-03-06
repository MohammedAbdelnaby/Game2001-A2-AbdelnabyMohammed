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
public:
	PriorityQueue(): LinkedList<T>()
	{	}

	void Push(T NewData, int priority)
	{
		Node<T>* NewNode = new Node<T>;
		assert(NewNode != nullptr);
		NewNode->SetData(NewData);
		NewNode->SetPriority(priority);
		if (this->Last != nullptr)
		{
			Node<T>* temp = new Node<T>;
			for (int i = 0; i < this->size; i++)
			{
				if (this->operator[](i)->GetPriority() >= priority)
				{
					if (i - 1 < 0)
					{
						temp = this->Root;
						this->Root = NewNode;
						this->Root->SetNext(temp);
					}
					else
					{
						PlaceLeft(this->operator[](i - 1), NewNode);
					}
					this->size++;
					return;
				}
			}
			PlaceRight(this->operator[](this->size - 1), NewNode);
		}
		else
		{
			this->Root = NewNode;
			 this->Last = NewNode;
		}
		this->size++;
	}
private:
	void PlaceRight(Node<T>* node, Node<T>* rightNode)
	{
		Node<T>* nextnode = new Node<T>;
		nextnode = node->GetNext();
		node->SetNext(rightNode);
		rightNode->SetNext(nextnode);
		this->Last = rightNode;
	}

	void PlaceLeft(Node<T>* node, Node<T>* leftNode)
	{
		Node<T>* nextnode = new Node<T>;
		nextnode = node->GetNext();
		node->SetNext(leftNode);
		leftNode->SetNext(nextnode);
	}
};