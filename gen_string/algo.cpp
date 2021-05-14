#include <iostream>
#include <string>
#include <random>

char rchar() {
    char nchar = rand() % 27 + 97;      //ascii code of small a == 97
    if (nchar == '{') {                 // using 27 so one code can be space
        nchar =  ' ';
    } 
    return nchar;
}

void algorithm(std::string goal) {
    int highest = 0;
    std::string best = "                                          ";
    int count = 0;

    for (int i = 0; i < goal.length(); i += 1) {
        while (best[i] != goal[i]) {
            char n = rchar();
            best[i] = n;
            std::cout << best << std::endl;
        }
    }
}

int main() {
    const std::string goal = "methinks it is like a weasel";
    int num = 50;
    int *ptr = &num;

    //std::cout << ptr << std::endl;
    //std::cout << *ptr << std::endl;
    algorithm(goal);

    return 0;
}