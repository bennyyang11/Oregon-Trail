#ifndef party_h
#define party_h
#include <string>
using namespace std;
class Party{
    public:
        Party();
        Party(int money);
        Party(string name, int age ,string job ,int member, int health,int money);
        string getName();
        void setName(string name);
        int getMember();
        void setMember(int member);
        string getJob();
        void setJob(string job);
        int getAge();
        void setAge(int age);
        int getHealth();
        void setHealth(int health);
        int getMoney();
        void setMoney(int money);
    private:
        string name;
        int member;
        string job;
        int age;
        int health;
        int money;
};
#endif