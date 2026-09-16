#include <iostream>
#include <string>
#include <vector>
////////////////////////////////////////////////////above is #includes
int menu() {
    std::cout << "\n" << "\n"
              << "=====TODO=====\n"
              << "user, please choose a option\n"
              << "\n" << "\n"
              << "1. view tasks\n"
              << "2. add a task\n"
              << "3. remove a task\n";

    int choice;
    std::cout << "\n\n"
              << "please choose a option number:";
    std::cin >> choice;

    return choice;
}
//////////////////////////////////







///////////////////////////////////////////////////above is functions
int main(){

    std::vector<std::string> tasks;

    int chosen = menu();


    std::cout << "you chose: " << chosen << "\n";




    return 0;
}








///////////////////////////////////// above is int main (){}







