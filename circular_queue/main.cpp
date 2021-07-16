#include <iostream>
using namespace std;
#include "queue.h"
#define  NUM 5


void main()
{
	Queue<float> aQueue;
	int tmp;

	try
	{
		tmp = aQueue.dequeue();
	}
	catch (exception ex)
	{
		cout << ex.what() << endl;
	}

	for (int i = 0; i < NUM; i++)
	{
		try
		{
			aQueue.enqueue(i + 0.2);

		}
		catch (exception ex)
		{
			cout << ex.what() << endl;
		}
	}

	for (int i = 0; i < NUM; i++)
	{
		try
		{
			cout << aQueue.dequeue() << endl;
		}
		catch (exception ex)
		{
			cout << ex.what() << endl;
		}
	}

	if (aQueue.isEmpty())
	{
		cout << "Warteschlange leer!" << endl;
	}
	else
	{
		cout << "Warteschlange nicht leer!" << endl;
	}
}