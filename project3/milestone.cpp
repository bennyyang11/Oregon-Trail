#include "milestone.h"
Milestone::Milestone(){
    name = " ";
    mile = 0;
}
Milestone::Milestone(string name1, int mile1){
name = name1;
mile = mile1;
}
string Milestone::getName(){
    return name;
}
void Milestone::setName(string name1){
    name = name1;
}
int Milestone::getMile(){
    return mile;
}
void Milestone::setMile(int mile1){
    mile = mile1;
}
