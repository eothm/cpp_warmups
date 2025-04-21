#include <string>
#include <unordered_map>
#include <memory>
#include <map>
#include <vector>
#include "Task.h"
#include "User.h"
using namespace std;
class TaskManager {
    public:
        void addTask(string name, string description);
        void assignTaskToUser(int taskId, string userName);
        void listTasks();
        void listUserTasks(string user);
        void completeTask(int taskId);
    private:
        int taskIdCounter = 0;
        unordered_map<int, shared_ptr<Task>> allTasks;
        map<string, vector<shared_ptr<Task>>> userTasks;
};