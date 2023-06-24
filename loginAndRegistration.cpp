#include <iostream>
#include <string>

int registrationQuestion;
std::string username;
std::string password;

void registration()
{
    std::cout;
}


void login()
{
    std::cout<<"Please type in your username to access the cool message.\n> ";
    std::cin>>username;
    std::cout<<"Now type in your password.\nUsername: "<<username<<std::endl<<"> ";
    std::cin>>password;

}

int main()
{
    std::cout<<"Would you like to register to see a cool message?\n1. Register\n2. Don't Register\n> ";
    switch(registrationQuestion)
    {
        case 1:
            registration();
            break;
        case 2:
            std::cout<<"That's unfortunate, have a good day.\n";
            break;
        default:
            std::cout<<"Pick a proper choice!\n";
            break;
    }        
    return 0;
}