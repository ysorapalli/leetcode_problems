// 232. Implement Queue using Stacks
// https://leetcode.com/problems/implement-queue-using-stacks/
// Difficulty: Easy | Runtime: 0 ms (beats 100.0%) | Memory: 10.2 MB (beats 45.4%)

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
        peek();
        int x = output.top();
        output.pop();
        return x;
    }

    int peek() {
        if(output.empty()){
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
        }
        return output.top();
    }

    bool empty() {
        return input.empty() && output.empty();
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
