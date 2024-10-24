#include <iostream>
#include <stack>
#include <vector>

int main() {
    std::vector<int> arr = {4, 5, 2, 25};
    std::stack<int> s;
    std::vector<int> nge(arr.size(), -1);

    for (int i = 0; i < arr.size(); i++) {
        while (!s.empty() && arr[s.top()] < arr[i]) {
            nge[s.top()] = arr[i];
            s.pop();
        }
        s.push(i);
    }

    std::cout << "Next Greater Element:\n";
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " --> " << nge[i] << "\n";
    }

    return 0;
}

