// dragon.cpp

#include <iostream>
#include <stdlib.h>

//    srand (time(NULL));
//    int computer = rand() % 3 + 1;

int main() {

    std::string users_name = "";
    std::string input_string = "";
    bool valid = false;
    bool running = true;
    bool training = false;
    bool dragon_fight = false;
    int bow = 0;
    int sword = 0;
    int endurance = 0;
    
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
            running = false;
        }
        else {
            std::cout << "Please enter yes or no!\n";
            valid = false;
        }
    }
    training = true;
    while (running == true && training == true) {
        // introduction
        std::cout << "\n";
        std::cout << "I think you need to level up to save the prince.\n";
        std::cout << "There are 3 different areas to train in...\n";
        std::cout << "\n";
        std::cout << "--> The forest will train your bow skills with the elves\n";
        std::cout << "\n";
        std::cout << "--> The sea will train your sword skills with the pirates\n";
        std::cout << "\n";
        std::cout << "--> The desert will train your endurance skills\n";
        std::cout << "\n";
        
        // would you like to train question
        valid = false;
        while (valid == false) {
            valid = true;
            std::cout << "Would you like to train or would you like to face the dragon?\n";
            std::cout << "Response: ";
            std::cin >> input_string;
            if (input_string == "train" || input_string == "Train") {
                
                // runs through training cycle until user does not want to train again
                training = true;
            }
            else if (input_string == "dragon" || input_string == "Dragon") {
                dragon_fight = true;
            }
            else {
                std::cout << "Please enter 'train' or 'dragon'\n";
                valid = false;
            }
        }
        while (training == true) {
            
            // which skill gets increased loop
            valid = false;
            while (valid == false) {
                valid = true;
                std::cout << "\n";
                std::cout << "Where would you like to train?\n";
                std::cout << "Forrest, desert or sea?: ";
                std::cin >> input_string;
                if (input_string == "Forrest" || input_string == "forrest") {
                    bow++;
                    std::cout << "\n";
                    std::cout << "Your bow skill increased!\n";
                    std::cout << "Bow = " << bow;
                }
                else if (input_string == "Desert" || input_string == "desert") {
                    endurance++;
                    std::cout << "\n";
                    std::cout << "Your endurance increased!\n";
                    std::cout << "Endurance = " << endurance;
                }
                else if (input_string == "Sea" || input_string == "sea") {
                    sword++;
                    std::cout << "\n";
                    std::cout << "Your sword skill increased!\n";
                    std::cout << "Sword = " << sword;
                }
                else {
                    std::cout << "\n";
                    std::cout << "Please enter forrest, desert or sea!\n";
                    valid = false;
                }
            }
            // would you like to train again loop
            valid = false;
            while (valid == false && training == true) {
                valid = true;
                std::cout << "\n";
                std::cout << "Would you like to train again?\n";
                std::cout << "Yes or no?: ";
                std::cin >> input_string;

                if (input_string == "Yes" || input_string == "yes") {
                    training = true;
                }
                else if (input_string == "No" || input_string == "no") {
                    training = false;
                    dragon_fight = true;
                }
                else {
                    std::cout << "You must enter yes or no!\n";
                    valid = false;
                }
            }
        }
        while (dragon_fight == true) {
            std::cout << "\n";
            std::cout << "-----------------------\n";
            std::cout << "-----------------------\n";
            std::cout << "    **  Warning  **    \n";
            std::cout << "-----------------------\n";
            std::cout << "-----------------------\n";
            std::cout << "You are about to face the dragon\n";
            std::cout << "Please make sure you are ready for this challenge!\n";
            
            //get a valid input
            valid = false;
            while (valid == false) {
                valid = true;
                std::cout << "Would you like to continue or go home?\n";
                std::cout << "Continue or Home?: ";
                std::cin >>  input_string;
                if (input_string == "Continue" || input_string == "continue") {
                    std::cout << "Your brave farmer, come on then!\n";
                }
                else if (input_string == "Home" || input_string == "home") {
                    std::cout << "Very well, there is no shame in retreat, farewell " << users_name << "\n";
                    dragon_fight = false;
                    running = false;
                }
                else {
                    std::cout << "Please enter Home or Dragon\n";
                    valid = false;
                }
                }
            // win conditions
            if (sword >= 3 && bow >= 2 && endurance >= 1 && running == true) {
                std::cout << "Congratulations!!!\n";
                std::cout << "You defeated the dragon and saved the Prince!!!\n";
                dragon_fight = false;
                running = false;
            }
            else if (bow < 2 && running ==true) {
                std::cout << "You need to work on your bow skills\n";
                std::cout << "You weren't able to injur the dragon\n";
                std::cout << "You died, the end, better luck next time :(\n";
                dragon_fight = false;
                running = false;
            }
            else if (sword < 3 && running == true) {
                std::cout << "You need to work on your sword skills\n";
                std::cout << "You weren't able to pierce the dragons scales\n";
                std::cout << "You died, the end, better luck next time :(\n";
                dragon_fight = false;
                running = false;
            }
            else if (endurance < 1 && running == true) {
                std::cout << "You need to work on your endurance\n";
                std::cout << "You didn't survive for long enough\n";
                std::cout << "You died, the end, better luck next time\n";
                dragon_fight = false;
                running = false;
            }
        }

    }

}