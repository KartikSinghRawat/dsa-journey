class MyQueue {
public:
    stack <int> input;
    stack <int> output;
    MyQueue() {
    }
    void shiftstacks(){
        while(output.empty()){
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
        }
    }
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        if (empty()) return -1;
        shiftstacks();
        int frontval = output.top();
            output.pop();
            return frontval;
    }
    
    int peek() {
        if (empty()) return -1;
        shiftstacks();
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