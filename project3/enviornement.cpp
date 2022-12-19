#include "environment.h"
Environment::Environment(){
weather = " ";
temp = 0;
biome = " ";
species = " ";
}
Environment::Environment(string weather1, int temp1, string biome1, string species1){
weather = weather1;
temp = temp1;
biome = biome1;
species = species1;
}
string Environment:: getWeather(){
    return weather;
}
void Environment:: setWeather(string weather1){
weather = weather1;
}
int Environment::getTemp(){
    return temp;
}
void Environment::setTemp(int temp1){
    temp = temp1;
}
string Environment::getBiome(){
    return biome;
}
void Environment::setBiome(string biome1){
    biome = biome1;
}
string Environment::getSpecies(){
    return species;
}
void Environment::setSpecies(string species1){
    species = species1;
}