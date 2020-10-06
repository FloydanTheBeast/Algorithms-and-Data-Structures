#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int index = 0; // Индекс, куда в следующий раз вставится элемент
    int capacity;
    int maxCapacity = 1000;
public:
    Stack(int capacity) {
        if (capacity > 0) {
            this->capacity = capacity;
            this->arr = new int[capacity];
        }
        else
            throw "Размер стека должен быть положительным числом";
    };

    void push(int elem) {
        this->arr[++this->index] = elem;
    };

    int pop() {
        return this->arr[index--];
    };

    int top() {
        return this->arr[index - 1];
    };

    int nextToTop() {
        return this->arr[index - 2];
    };
};

int main() {
    return 0;
}