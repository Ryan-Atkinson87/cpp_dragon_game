#include <iostream>
#include <stdlib.h>

//    srand (time(NULL));
//    int computer = rand() % 3 + 1;

int main() {

    std::string users_name = "";
    std::string input_string = "";
    bool valid = false;
    
    // introduction
    std::cout << "\n";
    std::cout << "-------------------------\n";
    std::cout << "-------------------------\n";
    std::cout << " Welcome to Dragon Game! \n";
    std::cout << "-------------------------\n";
    std::cout << "-------------------------\n";
    std::cout << "\n";
    std::cout << "What is your name?: ";
    std::cin >> users_name;
    std::cout << "\n";
    std::cout << "Hello there " << users_name << "\n";
    std::cout << "I see you are busy working your farm.\n";
    std::cout << "Have you heard about the dragon who \n";
    std::cout << "is holding the prince prisoner in\n";
    std::cout << "that castle over there?\n";
    std::cout << "\n";

    // first choice, help the prince?    
    while (valid == false) {
        valid = true;
        std::cout << "Do you think we should help him out?: ";
        std::cin >> input_string;
        std::cout << "\n";
        if (input_string == "Yes" || input_string == "yes") {
            std::cout << "Come on then, let's go!\n";
            std::cout << "\n";
        }
        else if (input_string == "No" || input_string == "no") {
            std::cout << "Goodbye then " << users_name << ", I'll let you get on with your work\n";
            std::cout << "\n";
        }
        else {
            std::cout << "Please enter yes or no!\n";
            valid = false;
        }
    }

}