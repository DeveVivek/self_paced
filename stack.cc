#include <iostream>
#include <stack>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        arr = new int[size];
        top = -1;
        this->size = size;
    }

    void push(int data)
    {
        if (top == size - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = data;
    }
    void pop()
    {
        top--;
    }
    int getSize(){
        return top+1;;
        //return this->size
    }
    bool isEmpty(){
        if(top==-1)
            return true;
        else
            return false;
    }
    int getTop(){
        if(top!=-1)
            return arr[top];
        else
            return -1;
    }
};

int main()
{
    Stack* st = new Stack(5);
    st->push(3);
    st->push(5);
    st->push(6);
    st->push(7);
    st->push(9);
    cout<<st->getSize()<<endl;
    st->pop();
    st->pop();
    st->pop();
    cout<<st->getSize()<<endl;
    return 0;
}