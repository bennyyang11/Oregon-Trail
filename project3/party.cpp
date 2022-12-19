#include "party.h"
Party::Party(){
    name = " ";
    age = 0;
    job = " ";
    member = 0;
    health = 0;
    money = 0;
}
Party::Party(string name1, int age1, string job1, int member1, int health1, int money1){
name = name1;
age = age1;
job = job1;
member = member1;
health = health1;
money = money1;
}
string Party::getName(){
    return name;
}
void Party::setName(string name1){
    name = name1;
}
int Party::getAge(){
    return age;
}
void Party::setAge(int age1){
    age = age1;
}
string Party::getJob(){
    return job;
}
void Party::setJob(string job1){
    job = job1;
}
int Party::getMember(){
    return member;
}
void Party::setMember(int member1){
    member = member1;
}int Party::getHealth(){
    return health;
}
void Party::setHealth(int health1){
    health = health1;
}
int Party::getMoney(){
    return money;
}
void Party::setMoney(int money1){
    money = money1;
}