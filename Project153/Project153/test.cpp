#include <iostream>
using namespace std;
#pragma warning(disable:4996)


template <typename Type>
class List;

template <class Type>
class ListNode
{

	friend class List<Type>;

public:
	ListNode(Type d = Type()) :data(d), next(nullptr)
	{}

private:
	Type data;
	ListNode *next;
	
};


template <class Type>
class List
{

public:

	List() :head(nullptr)
	{
		head = tail = new ListNode<Type>;

	}



public:
	void push_back(const Type &x)
	{
		ListNode<Type> *s = new ListNode<Type>(x);
		tail->next = s;
		tail = s;

	}


private:
	ListNode <Type>*head;
	ListNode <Type>*tail;

};


class String1;
//{
//public:
//	String1(int d=0)
//	{
//
//
//
//	}
//}






void main()
{

	List<int> mylist;
	List<int> youlist;
	/*mylist.push_back(1);
	mylist.push_back(2);
	mylist.push_back(3);
	mylist.push_back(3);
	mylist.push_back(3); 
	mylist.push_back(3);
	mylist.push_back(3); 
	mylist.push_back(3);
*/


	List <String1> hilist;

	return 0;
}