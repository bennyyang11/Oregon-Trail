#ifndef environment_h
#define environment_h
#include <string>
using namespace std;
class Environment{
    public:
        Environment();
        Environment(string weather, int temp, string biome, string species);
        string getWeather();
        void setWeather(string weather);
        int getTemp();
        void setTemp(int temp);
        string getBiome();
        void setBiome(string biome);
        string getSpecies();
        void setSpecies(string species);
    private:
        string weather;
        int temp;
        string biome;
        string species;
};
#endif