#include <iostream>

int main(){
    int favorite_number;
    std::cout << "Insert your favorite number between 1 and 100:";
    std::cin >> favorite_number;
    
    if (favorite_number>100) {
        std::cout << "Please insert number less than 100!" << std::endl;
        return main();
    }
    if (favorite_number<1) {
        std::cout << "Please insert number more than 1!" << std::endl;
        return main();
    }
    
    if (0<favorite_number) if (favorite_number<101) {
        std::cout << "Amazing! That's my favourite number too!" << std::endl;
        std::cout << "No really!, " << favorite_number << " is my favorite number!" << std::endl;
    }
    return 0;
}
