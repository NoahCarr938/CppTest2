#include <iostream>
// Only include header and not cpp file, the program will freak out.
#include "PLayer.h"

int main()
{
    // ctrl rr to rename something
    Player bobulus = Player();

    std::cout << "Hello and welcome! \n";
    std::cout << "\n";

    // Get name
    std::cout << "What is your name?\n";
    std::cout << "> ";
    // Made a character array, reading from the console input into name.
    // Unsafe code
    // Use standard library string instead
    char name[512];
    std::cin >> name;
    bobulus.SetName(name);

    bool shouldExitLoop = false;
    while (!shouldExitLoop)
    {
        system("cls");
        bobulus.PrintStats();
        std::cout << std::endl;
        std::cout << "Hello " << bobulus.GetName() << "! What would you like to do to day?" << std::endl;
        std::cout << "1. Take 5 damage\n";
        std::cout << "2. Heal 5 damage\n";
        std::cout << "3. Add 17 xp\n";
        std::cout << "4. Quit\n";
        std::cout << "> ";

        // Get input
        int input = 0;
        std::cin >> input;

        // Process input
        switch (input)
        {
        case 1:
            bobulus.TakeDamage(5);
            // If you dont break, you will go into the next case.
            break;
        case 2:
            bobulus.Heal(5);
            break;
        case 3:
            bobulus.AddXP(17);
            break;
        case 4:
            shouldExitLoop = true;
            break;
        }
    } 
    return 0;
}