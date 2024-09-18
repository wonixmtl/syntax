#include "StackQueue.h"

StackQueue::StackQueue()
{
    size = 0;
    top = -1;
    front = 0;
    rear = 0;
    for (int i = 0; i < MAXSIZE; i++)
    {
        arr[i] = 0;
    }
}

StackQueue::~StackQueue()
{
}

// Õ»
void StackQueue::defaultStack(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (!push(i + 1))
        {
            break;
        }
    }
}

bool StackQueue::push(int num)
{
    if (top < MAXSIZE-1)
    {
        arr[++top] = num;
        size++;
        return true;
    }
    return false;
}

int StackQueue::pop()
{
    if (top != -1)
    {
        size--;
        return arr[top--];
    }
    return -1;
}

int StackQueue::getTop()
{
    return top;
}

int StackQueue::getSize()
{
    return size;
}

bool StackQueue::isEmptyStack(StackQueue stack)
{
    return top == -1;
}

void StackQueue::clearStack()
{
    size = 0;
    top = -1;
    for (int i = 0; i < MAXSIZE; i++)
    {
        arr[i] = 0;
    }
}

// ¶ÓÁÐ
void StackQueue::defaultQueue(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (!input(i + 1))
        {
            break;
        }
    }
}

bool StackQueue::input(int num)
{
    if (rear < MAXSIZE)
    {
        arr[rear++] = num;
        size++;
        return true;
    }
    return false;
}

int StackQueue::output()
{
    if (front != rear)
    {
        size--;
        return arr[front++];
    }
    return -1;
}

int StackQueue::getFront()
{
    return front;
}

int StackQueue::getRear()
{
    return rear;
}
