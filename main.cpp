#include <iostream>

int main(){
    std::cout << "Enter a number: " ;
    int x{};
    std::cin >> x;
    std::cout << '\n' << "Double that number is: " << x*2;
    return 0;
}