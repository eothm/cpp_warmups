#include<string>

class User{
    public:
        User(std::string name);
        std::string getName() const;
    private:
    std::string name;
};