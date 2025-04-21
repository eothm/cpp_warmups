#include <string>
#include <chrono>
using namespace std;
class Task{
    public:
        Task(int id, string name, string description);
        void MarkComplete();
        void print() const;
        bool isComplete() const;

    private:
        int id;
        string name;
        string description;
        bool status = false;
        chrono::time_point<std::chrono::system_clock> creationTime;
        
};