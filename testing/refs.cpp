#include <iostream>

int main() {
    const int a = 2;
    const int& refa = a;
    const int* ptra = &a;

    std::cout << a << ' ' << &a << ' ' << refa << ' ' << ptra << ' ' << *ptra << std::endl;
    return 0;
}