
#include <iostream>
#include <string>
#include <vector>

//////////////////////////////////////////////////// above is #includes


int menu()
{
    std::cout << "\n" << "\n"
    << "=====TODO=====\n"
    << "user, please choose a option\n"
    << "\n" << "\n"
    << "1. view tasks\n"
    << "2. add a task\n"
    << "3. remove a task\n"
    << "4. quit";

    int choice;

    std::cout << "\n\n"
    << "please choose a option number:";

    std::cin >> choice;

    return choice;
}


//////////////////////////////////


/////////////////////////////////////////////////// above is functions


int main()
{
    std::vector<std::string> tasks;

    int chosen = menu();

    std::cout << "you chose: " << chosen << "\n\n\n";


    if (chosen == 1)
    {
        std::cout << "welcome to task viewer\n";
    }

    else if(chosen == 2)
    {
        std::cout << "welcome to task add utility\n";
    }

    else if(chosen == 3)
    {
        std::cout << "welocme to task remover utility\n";
    }


    return 0;
}

















