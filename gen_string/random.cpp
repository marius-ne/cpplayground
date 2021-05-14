#include <iostream>
#include <string>
#include <random>

int highest = 0;
std::string best = "";
int count = 0;

std::string generate(int length) {
    std::string res = "";
    for (int i = 0; i < length; i += 1) {
        char nchar = rand() % 27 + 97;      //ascii code of small a == 97
        if (nchar == '{') {
            res += ' ';
        } else {
            res += nchar;
        }
    }
    //std::cout << res << std::endl;
    return res;
}

bool eval(std::string goal, std::string random) {
    int val = 0;
    for (int i = 0; i < goal.length(); i += 1) {
        if (goal[i] == random[i]) {
            val += 1;
        }
    }
    count += 1;
    if (count % 10000000 == 0) {
        std::cout << best << std::endl;
    }
    if (val > highest) {
        highest = val;
        best = random;
    }
    if (val == goal.length()) {
        return true;
    } else {
        return false;
    }
}

int main() {
    const std::string goal = "methinks it is like a weasel";
    int num = 50;
    int *ptr = &num;

    //std::cout << ptr << std::endl;
    //std::cout << *ptr << std::endl;
    bool value;
    std::string sent;
    while (value == false) {
        sent = generate(goal.length());
        value = eval(goal, sent);
    }
    std::cout << sent;

    return 0;
}