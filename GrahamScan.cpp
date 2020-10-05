#include <iostream>

using namespace std;

template <typename T>
class Stack {
private:
    T* arr;
    int index;
public:
    void push(T elem);
    T pop();
    T top();
    T nextToTop();
}

int main() {
    return 0;
}