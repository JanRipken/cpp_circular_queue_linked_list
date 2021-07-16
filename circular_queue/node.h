
#include<iostream>
using namespace std;

template <class T> // Template
class node // Klassendefinition Node
{
public:
	node* next;
	T data;

	node(T d) // Inline Methode
	{
		next = NULL;
		data = d;
	};
};
