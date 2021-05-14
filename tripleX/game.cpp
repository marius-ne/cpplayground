#include <iostream>
#include <string>

void welcome() {
    std::cout << "WELCOME TO THE GAME\nFIND THE THREE NUMBERS AND BREAK IN\n\nGOOD LUCK!\n=======================\n" << std::endl;
}

void question(const int &adds, const int &mults, const int &level) {
    std::cout << "LEVEL " << level << "----------------------\nTHE NUMBERS TO BREAK ARE:\n" << "multiplied: " 
              << mults << "\nadded: " << adds << "\n\nWHAT IS YOUR ANSWER?" << std::endl;
}

const int *numbers(const int &height, const int &breadth) {
    // generates three nums betwenn height and height + breadth
    const int first = rand() % breadth + height;
    const int second = rand() % breadth + height;
    const int third = rand() % breadth + height;
    const int nums[] = {first, second, third};
    
    const int *ptr = &nums[0];

    return ptr;
}

void game(int start) {
    for (int i = start; i <= 5; i += 1) {
        const int* res = numbers(i,i);      // adjust args for difficulty
        const int nums[] = {*res, *(res + 1), *(res+2)};
        const int mults = nums[0] * nums[1] * nums[2];
        const int adds = nums[0] + nums[1] + nums[2];
        // prompt for input
        question(adds, mults, i);

        int ans1 = 0;
        int ans2 = 0;
        int ans3 = 0;
        // take guesses
        std::cin >> ans1 >> ans2 >> ans3;

        if ((ans1 * ans2 * ans3 == mults) && (ans1 + ans2 + ans3 == adds)) {
            std::cout << "WELL DONE.\nMOVING TO NEXT LEVEL.\n" << std::endl;
            continue;
        } else {
            std::cout << "THAT'S WRONG.\nCORRECT ANSWERS WERE: " <<  nums[0] << ' ' << nums[1] << ' '  << nums[2] << ' '  << "\nSTAYING AT THIS LEVEL.\n" << std::endl;
            game(i);
            break;
        }
    }
}

int main() {
    welcome();
    game(1);
    
    std::cout << "CONGRATULATIONS!" << "\nYOU WON!" << std::endl;

    return 0;
}