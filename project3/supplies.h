#ifndef supplies_h
#define supplies_h
#include <string>
using namespace std;
class Supplies{
    public:
        Supplies();
        Supplies(int food, int wheels,int oxen,int bullets,int axel,int tongue, int medicalkit,int yoke);
        int getOxen();
        void setOxen(int oxen);
        int getYoke();
        void setYoke(int yoke);
        int getBullets();
        void setBullets(int bullets);
        int getFood();
        void setFood(int food);
        int getWheels();
        void setWheels(int wheels);
        int getAxel();
        void setAxel(int axel);
        int getTongue();
        void setTongue(int tongue);
        int getMedicalKit();
        void setMedicalKit(int medicalkit);
    private:
        int food;
        int wheels;
        int oxen;
        int bullets;
        int axel;
        int tongue;
        int medicalkit;
        int yoke;
};
#endif