// 225. Implement Stack using Queues
// https://leetcode.com/problems/implement-stack-using-queues/
// Difficulty: Easy | Runtime: 0 ms (beats 100.0%) | Memory: 9.4 MB (beats 100.0%)

class MyStack {
public:
    queue<int> q;

    MyStack() {

    }

    void push(int x) {
        q.push(x);
        for(int i=0; i<q.size()-1; i++){
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        int top = q.front();
        q.pop();
        return top;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
