#include "supplies.h"
Supplies::Supplies(){
   food = 0;
   wheels = 0;
   oxen = 0;
   bullets = 0;
   axel = 0;
   tongue = 0;
   medicalkit = 0;
   yoke = 0;

}
Supplies::Supplies(int food1,int wheels1,int oxen1,int bullets1,int axel1,int tongue1,int medicalkit1,int yoke1){
   food = food1;
   wheels = wheels1;
   oxen = oxen1;
   bullets = bullets1;
   axel = axel1;
   tongue = tongue1;
   medicalkit = medicalkit1;
   yoke = yoke1;
}
int Supplies::getFood(){
   return food;
}
void Supplies::setFood(int food1){
   food = food1;
}
int Supplies::getWheels(){
   return wheels;
}
void Supplies::setWheels(int wheels1){
   wheels = wheels1;
}
int Supplies::getOxen(){
   return oxen;
}
void Supplies::setOxen(int oxen1){
   oxen = oxen1;
}
int Supplies::getBullets(){
    return bullets;
}
void Supplies::setBullets(int bullets1){
    bullets = bullets1;
}
int Supplies::getAxel(){
    return axel;
}
void Supplies::setAxel(int axel1){
    axel = axel1;
}
int Supplies::getTongue(){
    return tongue;
}
void Supplies::setTongue(int tongue1){
    tongue = tongue1;
}
int Supplies::getMedicalKit(){
    return medicalkit;
}
void Supplies::setMedicalKit(int medicalkit1){
    medicalkit = medicalkit1;
}
int Supplies::getYoke(){
   return yoke;
}
void Supplies::setYoke(int yoke1){
   yoke = yoke1;
}