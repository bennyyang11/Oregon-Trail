#ifndef player_h
#define player_h
#include <string>
using namespace std;
class Player{
    public:
        Player();
        Player(string name, int age, string job,int health,int money);
        string getName();
        void setName(string name);
        int getAge();
        void setAge(int age);
        string getJob();
        void setJob(string job);
        int getHealth();
        void setHealth(int health);
        int getMoney();
        void setMoney(int money);
    private:
        string name;
        int age;
        string job;
        int health;
        int money;
};
#endif
