/*
Implement a first in first out (FIFO) queue using only two stacks. The implemented queue should support all the functions of a normal queue (push, peek, pop, and empty).

Implement the MyQueue class:

void push(int x) Pushes element x to the back of the queue.
int pop() Removes the element from the front of the queue and returns it.
int peek() Returns the element at the front of the queue.
boolean empty() Returns true if the queue is empty, false otherwise.
Notes:

You must use only standard operations of a stack, which means only push to top, peek/pop from top, size, and is empty operations are valid.
Depending on your language, the stack may not be supported natively. You may simulate a stack using a list or deque (double-ended queue) as long as you use only a stack's standard operations.
*/

class MyQueue {
public:
    stack<int> input;
    stack<int> output;
    
    MyQueue() {
       
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        if(!output.empty())
        {
            int ele =  output.top();
            output.pop();
            return ele;
        }
        else
        {
            while(!input.empty())
            {
                int ele = input.top();
                input.pop();
                output.push(ele);
            }
            
            int ele =  output.top();
            output.pop();
            return ele;
        }
    }
    
    int peek() {
        if(!output.empty())
        {
            return output.top();
        }
        else
        {
            while(!input.empty())
            {
                int ele = input.top();
                input.pop();
                output.push(ele);
            }
            
            return output.top();
        }
    }
    
    bool empty() {
        if(input.empty() and output.empty()) return true;
        else return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
