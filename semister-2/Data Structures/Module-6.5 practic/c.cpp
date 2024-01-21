#include <bits/stdc++.h>

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        next = NULL;
    }
};
class Queue
{
public:
    Node *head = NULL, *tail = NULL;
    Queue()
    {
        // Implement the Constructor
    }
    bool isEmpty()
    {
        // Implement the isEmpty() function
        return head == NULL;
    }

    void enqueue(int data)
    {
        // Implement the enqueue() function
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    int dequeue()
    {
        // Implement the dequeue() function
        if (head == NULL)
            return -1;
        int val = head->val;
        head = head->next;
        return val;
    }

    int front()
    {
        // Implement the front() function
        if (head == NULL)
            return -1;
        return head->val;
    }
};
// --------------------------
