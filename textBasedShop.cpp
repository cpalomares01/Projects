#include <iostream>

int shopChoice;

void shopChoicePrinter()
{
    //Prints out text for each choice as well as a catch-all for unavailable choices.
    system("cls");
    switch (shopChoice)
    {
        case 1:
            std::cout<<"Shopkeeper:\"Excellent choice, here you go!\"\n";
            std::cout<<"You bought a health potion!\n";
            break;
        case 2:
            std::cout<<"Shopkeeper:\"Fine choice, here you go!\"\n";
            std::cout<<"You bought a mana potion!\n";
            break;
        case 3:
            std::cout<<"Shopkeeper:\"Good choice, here you go!\"\n";
            std::cout<<"You bought a Damage potion!\n";
            break;
        default:
            std::cout<<"Shopkeeper:\"Hmph!...\"\n";
            std::cout<<"(Choose a proper option!)\n";
    }
}

void introductionToTheGame()
{
    //The lore behind the game.
    system("cls");
    std::cout<<"Deep out in the woods rests a quiet little shop.\n"
    <<"It's known for selling three kinds of potions: Health Potions, Mana Potions, and Damage Potions.\n"
    <<"Your task is to go to the shop, and purchase potions. Good luck."<<std::endl;
    
    system("pause");
}

void shopChoices()
{
    //Prints out the Shopkeeper's choices of potions.
    system("cls");
    std::cout<<"Shopkeeper:\"Hello! What would you like to buy?\""<<std::endl;
    std::cout<<"1. Health Potion\n2. Mana Potion\n3. Damage Potion\n> ";

    std::cin>>shopChoice;
}

int main()
{
    introductionToTheGame();
    shopChoices();
    shopChoicePrinter();

    system("pause");
}
