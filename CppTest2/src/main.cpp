#include <iostream>
// Only include header and not cpp file, the program will freak out.
#include "Player.h"
#include "Enemy.h"

//class Enemy
//{
//public:
//    Enemy(float hp = 5)
//    {
//        hp = health;
//        std::cout << "Constructor called!" << std::endl;
//    }
//    
//
//    float health = 5;
//};
class Item
{
    
};
class Enemy
{
public:
    Enemy() : m_healthPotion(new Item())
    {
        std::cout << "Enemy Constructor" << std::endl; 
    }
    // Initialize a destructor by putting "~" in front.
    // Should only handle cleaning up memory
    // If a class has no pointers it does not really need a destructor
    ~Enemy() 
    { 
        delete m_healthPotion;
        m_healthPotion = nullptr;
        std::cout << "Enemy Destructor" << std::endl; 
    }
private:
    
    Item* m_healthPotion;
};

//class EnemyManager
//{
//public:
//
//    EnemyManager()
//    {
//        bob = Enemy();
//    }
//
//    
//    Enemy bob;
//    float hp;
//    int count;
//};
int main()
{
    Enemy bob = Enemy();

    //std::cout << "Start" << std::endl;
    //Enemy* bob = nullptr;
    //bob = new Enemy();
    //// Anytime you new something you must delete it.
    //// If it is not called before you leave the scope then you cant call delete.
    //// It then becomes wasted memory.
    //delete bob;
    //std::cout << "End" << std::endl;
    
    //// Same method.
    //Enemy jake = Enemy(5);
    //// Calls the other contructor and passes in 5 as hp.
    //Enemy john(5);

    //EnemyManager manager = EnemyManager();
    //std::cout << manager.bob.health << std::endl;

    /*Enemy* bob = new Enemy();
    std::cout << bob->health << std::endl;
    delete bob;*/
    //Enemy bob = Enemy();

    //std::cout << bob.health << std::endl;



    // Use length instead of size, size usually refers to space such as bytes.
    //std::string test = "Test";
    //int length = test.length();
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