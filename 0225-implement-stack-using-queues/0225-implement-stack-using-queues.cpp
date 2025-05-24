class MyStack {
private:
    queue<int> q1, q2;

public:
    MyStack() {
    }
    
    void push(int x) {
        if (q1.empty()) {
            q1.push(x);
            while (!q2.empty()) {
                q1.push(q2.front());
                q2.pop();
            }
        } else {
            q2.push(x);
            while (!q1.empty()) {
                q2.push(q1.front());
                q1.pop();
            }
        }
    }
    
    int pop() {
        if (!q1.empty()) {
            int val = q1.front();
            q1.pop();
            return val;
        } else {
            int val = q2.front();
            q2.pop();
            return val;
        }
    }
    
    int top() {
        if (!q1.empty()) return q1.front();
        return q2.front();
    }
    
    bool empty() {
        return q1.empty() && q2.empty();
    }
};