#include "Milestone.h"
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
int split(string s, char sep,string array[], int size )
{
    int len = s.length();
    int i =0, arrayp = 0;
    string a = "";
      while(i!=len && (arrayp!= size))
    {
        if(s[i]== sep)
        {
            if(a!="")
            {
                array[arrayp]=a;
                arrayp++;
                a = "";
            }
        }
        else{
            a+=s[i];
        }
        if(i==len-1)
        {
            if(a!="")
            {
                array[arrayp]=a;
                arrayp++;
                a = "";
            }
        }
        i++;
    }
    if(i!=len && arrayp == size)
    {
        return -1;
    }
    else
    {
        return arrayp;
    }
}
int readMilestone(string filename,Milestone milestone[],int milestoneStored,int milestoneArrSize){
    int milestoneStored = 0;
    string newMilestone;
    ifstream file;
    file.open(filename);
    string line = "";
    string arr[50];
    if(file.is_open()){
            while(getline(file,line) && (milestoneStored < milestoneArrSize)){
                if(line != ""){
                split(line, ',', arr, 2);
                milestone[milestoneStored].setName(arr[0]);
                milestone[milestoneStored].setMile(arr[1]);
                milestoneStored++;
                }
            }
    }
    else{
        return -1;
    }
    return milestoneStored;
    file.close();
}
