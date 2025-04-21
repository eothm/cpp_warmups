#include "TaskManager.h"
#include <iostream>
#include <string>

int main() {
    TaskManager mgr;
    while (true) {
        std::cout << "\nCommands: add, assign, list, listu, done, exit\n> ";
        std::string cmd; std::cin >> cmd;

        if (cmd == "add") {
            std::cin.ignore();
            std::string title, desc;
            std::cout << "Title: ";   std::getline(std::cin, title);
            std::cout << "Desc: ";    std::getline(std::cin, desc);
            mgr.addTask(title, desc);
        }
        else if (cmd == "assign") {
            int id; std::string user;
            std::cout << "Task ID: "; std::cin >> id;
            std::cout << "User: ";    std::cin >> user;
            mgr.assignTaskToUser(id, user);
        }
        else if (cmd == "list") {
            mgr.listTasks();
        }
        else if (cmd == "listu") {
            std::string user;
            std::cout << "User: "; std::cin >> user;
            mgr.listUserTasks(user);
        }
        else if (cmd == "done") {
            int id;
            std::cout << "Task ID: "; std::cin >> id;
            mgr.completeTask(id);
        }
        else if (cmd == "exit") {
            break;
        }
        else {
            std::cout << "Unknown command\n";
        }
    }
    return 0;
}
