#include <iostream>

int main() {
    int num, reverse = 0, original;
    std::cout << "Enter a number: ";
    std::cin >> num;
    original = num;
    while (num != 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }
    if (original == reverse) {
        std::cout << original << " is a palindrome" << std::endl;
    } else {
        std::cout << original << " is not a palindrome" << std::endl;
    }

    return 0;
}

