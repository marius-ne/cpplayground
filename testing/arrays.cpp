#include <iostream>
#include <string>
#include <vector>

int arr[5] = {};

int main() {
    std::cout << arr[3] << std::endl;
    std::vector<int> vect(5);

    for (int i = 0; i < vect.size(); i += 1) {
        vect[i] = i*i;
    }

    for (auto i : vect) {
        std::cout << i << std::endl;
    }
    return 0;
}