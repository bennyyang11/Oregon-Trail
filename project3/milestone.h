#ifndef milestone_h
#define milestone_h
#include <string>
using namespace std;
class Milestone{
    public:
        Milestone();
        Milestone(string name, int mile);
        string getName();
        void setName(string name);
        int getMile();
        void setMile(int mile);
    private:
        string name;
        int mile;
};
#endif