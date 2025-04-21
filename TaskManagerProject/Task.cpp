#include "Task.h"
#include <iostream>
using namespace std;
Task::Task(int id, string name, string description){
    this->id = id;
    this->name = name;
    this->description = description;
    this->creationTime= chrono::system_clock::now();
}
void Task::MarkComplete(){
    this->status = true;
}
bool Task::isComplete() const{
    return this->status;
}
void Task::print() const{
    cout<<"Task ID: "<<this->id<<"\nTask Name: "<<this->name<<"\nTask Description: "<<this->description<<"\nTask Status: "<<(this->status ? "Complete" : "Incomplete")<<"\nCreation Time: "<<chrono::system_clock::to_time_t(this->creationTime)<<"\n";
    cout<<"----------------------------------------\n";
}