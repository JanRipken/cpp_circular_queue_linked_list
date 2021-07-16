#include <iostream>
#include "node.h"



template<class T>
class Queue {

private:
    //attributes
    node<T>* _front;
    node<T>* _back;

public:
    //constructor
    Queue()
    {
        _front = NULL;
        _back = NULL;
    };


    void enqueue(T x)
    {
        // Create a new LL node
        node<T>* temp = new node<T>(x);

        // If queue is empty, then
        // new node is front and back
        if (_back == NULL) {
            _front = _back = temp;
            return;
        }

        // Add the new node at
        // the end of queue and change back
        _back->next = temp;
        _back = temp;
    }


    // the Function to delete the element from the Circular Queue
    T dequeue()
    {
        try
        {
            if (isEmpty() == true)
            {
                throw exception("Warteschlange Leer!");
            }

            else
            {
                node<T>* n = _front;
                _front = _front->next;
                T value = n->data;
                delete(n);

                return value;
            }
        }

        catch (exception ex)
        {
            cout << ex.what() << endl;
            return NULL;
        }

    }


    bool isEmpty()
    {
        if (_front == NULL)
        {
            return true;
        }

        else
        {
            return false;
        }
    }
};
