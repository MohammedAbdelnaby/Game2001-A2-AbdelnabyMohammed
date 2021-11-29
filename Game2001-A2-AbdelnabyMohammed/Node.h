#pragma once

template<class T>
class Node
{
public:
	~Node() = default;

	int GetPriority()
	{
		return Priority;
	}
	void SetPriority(int priority)
	{
		Priority = priority;
	}

	void SetData(T thing)
	{
		Data = thing;
	}
	T GetData()
	{
		return Data;
	}

	Node* GetNext()
	{
		return Next;
	}
	void SetNext(Node* node)
	{
		Next = node;
	}

	Node* GetPrev()
	{
		return Prev;
	}
	void SetPrev(Node* node)
	{
		Prev = node;
	}
private:
	int Priority;
	T Data;
	Node* Next = nullptr;
	Node* Prev = nullptr;
};
