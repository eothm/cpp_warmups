#include "TaskManager.h"
#include <iostream>
using namespace std;

void TaskManager::addTask(string name, string description){
    shared_ptr<Task> task = make_shared<Task>(taskIdCounter, name, description);
    allTasks[taskIdCounter] = task;
    taskIdCounter++;
}

void TaskManager::assignTaskToUser (int taskId, string userName){
    if (allTasks.find(taskId) != allTasks.end()){
        userTasks[userName].push_back(allTasks[taskId]);
    } else {
        cout << "Task ID not found.\n";
    }
}

void TaskManager::listTasks(){
    for (int i=0; i<taskIdCounter; i++){
            allTasks[i]->print();
    }
}

void TaskManager::listUserTasks(string user){
    if (userTasks.find(user)!=userTasks.end()){
        cout<<"The user "<<user<<" has the following tasks:\n";
        for(int i=0; i<userTasks[user].size(); i++){
            userTasks[user][i]->print();
        }
    }else{
        cout<<"Couldn't find user "<<user<<".\n";
    }
}

void TaskManager::completeTask(int taskId){
    if (allTasks.find(taskId) != allTasks.end()){
        allTasks[taskId]->MarkComplete();
        cout << "Task ID " << taskId << " marked as complete.\n";
    } else {
        cout << "Task ID not found.\n";
    }
}