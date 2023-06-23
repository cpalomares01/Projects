#include <iostream>

void introductionToTheGame()
{
    //The lore behind the game.
    std::cout<<"Deep out in the woods rests a quiet little shop.\n"
    <<"It's known for selling three kinds of potions: Health Potions, Mana Potions, and Damage Potions.\n"
    <<"Your task is to go to the shop, and purchase potions. Good luck."<<std::endl;

    system("pause");
}

void shopChoices()
{
    //Prints out the Shopkeeper's choices of potions.
    std::cout<<"Shopkeeper:\"Hello! What would you like to buy?\""<<std::endl;
    std::cout<<"1.Health Potion\n2.Mana Potion\n3.Damage Potion";

    system("pause");
}

int main()
{
    shopChoices();
}