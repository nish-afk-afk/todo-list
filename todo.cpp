
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
    /////////////
while(true)
{
    int chosen = menu();

    std::cout << "you chose: " << chosen << "\n\n\n";
////////





    if (chosen == 1)
    {
        std::cout << "welcome to task viewer\n";

        for(int i = 0;i < tasks.size();i++)
        {
            std::cout << i + 1 <<". " << tasks[i] << "\n";

        }
    }


//////////////////



    else if(chosen == 2)
    {

        std::string newtask;
        std::cout << "welcome to task add utility\n";

        std::cout << "please enter taskname:";
        std::cin.ignore();
        std::getline(std::cin, newtask);

        tasks.push_back(newtask);
    }


/////////////////


    else if(chosen == 3)
    {
        std::cout << "welocme to task remover utility\n\n";

         int tasknumber;

         std::cout << "please enter task number:";
         std::cin >> tasknumber;


         tasks.erase(tasks.begin() + (tasknumber - 1));

         std::cout << "task removed\n";
    }

////////////////////
    else if(chosen == 4){

        break;
    }
}





    return 0;
}

















