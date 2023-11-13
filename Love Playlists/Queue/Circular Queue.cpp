#include <bits/stdc++.h>
using namespace std;

class MyCircularQueue
{
    int *arr;
    int front;
    int rear;
    int size;

public:
    MyCircularQueue(int k)
    {
        size = k;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool enQueue(int value)
    {
        // if it is first element of the string
        if (front == -1)
        {
            front = 0;
            rear = 0;
            arr[front] = value;
            return true;
        }

        else if (isFull())
        {
            return false;
        }

        if (rear == size - 1)
        {
            rear = -1;
        }

        arr[++rear] = value;
        return true;
    }

    bool
    deQueue()
    {
        if (isEmpty())
        {
            return false;
        }

        if (front == rear)
        {
            front = -1;
            rear = -1;
            return true;
        }

        if (front == size - 1)
        {
            front = -1;
        }

        front++;
        return true;
    }

    int Front()
    {
        if (front != -1)
        {
            return arr[front];
        }

        return -1;
    }

    int Rear()
    {
        if (rear != -1)
        {
            return arr[rear];
        }

        return -1;
    }

    bool isEmpty()
    {
        if (front == -1)
        {
            return true;
        }

        return false;
    }

    bool isFull()
    {
        if ((front == 0 && rear == size - 1) || (front == rear + 1))
        {
            return true;
        }

        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */

int main()
{

    return 0;
}