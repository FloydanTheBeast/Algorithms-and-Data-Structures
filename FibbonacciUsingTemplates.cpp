#include <iostream>
using namespace std;

template <int>
struct Fib;

template<>
struct Fib<0> {
    constexpr static auto next = 1;
};

template<>
struct Fib<1> {
    constexpr static auto next = 1;
};

template <int N> 
struct Fib {
    constexpr static auto next = Fib<N - 2>::next + Fib<N - 1>::next;
};

int main() {
    Fib<4>::next; // Calculated before the 
}