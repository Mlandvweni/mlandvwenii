#include <iostream>
#include <stack>

void insertAtBottom(std::stack<int>& s, int element) {
    if (s.empty()) {
        s.push(element);
        return;
    }
    int top = s.top();
    s.pop();
    insertAtBottom(s, element);
    s.push(top);
}

void reverseStack(std::stack<int>& s) {
    if (!s.empty()) {
        int top = s.top();
        s.pop();
        reverseStack(s);
        insertAtBottom(s, top);
    }
}

int main() {
    std::stack<int> s;
    s.push(31);
    s.push(30);
    s.push(29);
    s.push(28);

    reverseStack(s);

    while (!s.empty()) {
        std::cout << s.top() << " ";
        s.pop();
    }
    std::cout << std::endl;

    return 0;
}


