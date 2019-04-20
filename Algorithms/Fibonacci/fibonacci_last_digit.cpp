#include <iostream>
using namespace std;

int get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;
    int next=0;

    for (int i = 0; i < n - 1; ++i) {
        next = previous+current;
        previous=current;
        current=next;
        }
    return next % 10;
}

int main() {
    int n;
    cout<<"Enter the number: ";
    std::cin >> n;
    int c = get_fibonacci_last_digit_naive(n);
    std::cout << c << '\n';
    }
