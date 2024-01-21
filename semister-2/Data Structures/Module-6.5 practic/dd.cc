#include <bits/stdc++.h> 
class Node
{
    public:
    int val;
    Node*next;
    Node (int val)
    {
        this->val=val;
        this->next=NULL;
    }

    
};
class Queue {
public:
    Node*head;
    Node*tail;
    
    Queue() {
       head=NULL;
       tail=NULL;
    }
    int sz=0;

    /*----------------- Public Functions of Queue -----------------*/
    bool isEmpty() {
        if(sz>0) return false;
        return true;
    }

    void enqueue(int data) {
        sz++;
        Node*newQueue=new Node(data);
        if(head==NULL)
        {
            head=newQueue;
            tail=newQueue;
            return;
        }
        tail->next=newQueue;
        tail=newQueue;
    }

    int dequeue() {
        
        sz--;
        if(head==NULL) return -1;
        int res=head->val;
        head=head->next;
        return res;
    }

    int front() {
       if(sz>0) return -1;
       return head->val;
    }
};











