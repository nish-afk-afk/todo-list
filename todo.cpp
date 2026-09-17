#include <fstream>
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



void fileman(std::vector<std::string>& tasks)
{
    std::ifstream tasklist("tasks.txt");

    std::string lines;

    while(std::getline(tasklist, lines))
    {
        tasks.push_back(lines);
    }

}


/////////////////////////////////////////////////// above is functions
int main()
{
    std::vector<std::string> tasks;

    fileman(tasks);

    while(true)
    {
        int chosen = menu();

        std::cout << "you chose: " << chosen << "\n\n\n";

        if(chosen == 1)
        {
            std::cout << "welcome to task viewer\n";

            for(int i = 0; i < tasks.size(); i++)
            {
                std::cout << i + 1 << ". " << tasks[i] << "\n";
            }
        }

        else if(chosen == 2)
        {
            std::string newtask;

            std::cout << "welcome to task add utility\n";
            std::cout << "please enter taskname:";

            std::cin.ignore();
            std::getline(std::cin, newtask);

            tasks.push_back(newtask);
        }

        else if(chosen == 3)
        {
            std::cout << "welcome to task remover utility\n\n";

            int tasknumber;

            std::cout << "please enter task number:";
            std::cin >> tasknumber;

            tasks.erase(tasks.begin() + (tasknumber - 1));

            std::cout << "task removed\n";
        }

        else if(chosen == 4)
        {
            break;
        }
    } // ← while ends HERE


    // SAVE
    std::ofstream taskfile("tasks.txt");

    for(int j = 0; j < tasks.size(); j++)
    {
        taskfile << tasks[j] << "\n";
    }


    return 0;
}



















