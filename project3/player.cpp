#include "player.h"
Player::Player(){
    name = "";
    age = 0; 
    job = " ";
    health = 0;
    money = 0;
}
Player::Player(string name1, int age1, string job1, int health1, int money1){
    name = name1;
    age = age1;
    job = job1;
    health = health1;
    money = money1;
}
string Player:: getName(){
    return name;
}
void Player:: setName(string name1){
    name = name1;
}
int Player:: getAge(){
    return age;
}
void Player:: setAge(int age1){
    age = age1;
}
string Player:: getJob(){
    return job;
}
void Player::setJob(string job1){
    job = job1;
}
int Player:: getHealth(){
    return health;
}
void Player::setHealth(int health1){
    health = health1;
}
int Player::getMoney(){
    return money;
}
void Player::setMoney(int money1){
    money = money1;
}