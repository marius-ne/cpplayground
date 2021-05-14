#include <iostream>
#include <string>
using std::string;

void smult(int& times, const char& chr) {
    std::cout << string(times, chr) << std::endl;
}

template <class T, class U>
T foo(T first, U second) {
    return first + second;
}

namespace keck {
    int z;
}

int main() {
    std::cout << "Hello World!" << std::endl;
    
    string x = u8"string test";

    for (int i = 0; i < x.length(); i += 1) {
        std::cout << ((x[i] == 's') ? string(1, x[i]) : string(5, x[i])) << std::endl;
    }

    for (auto c : x) {
        std::cout << c << std::endl;
    }

    std::cout << foo(1, 1.0) << '\n' << keck::z;
    return 0;
}