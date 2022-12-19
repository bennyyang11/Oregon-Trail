#include <iostream>
#include <fstream>
#include <sstream>
#include <math.h>
#include "party.h"
#include "player.h"
#include "supplies.h"
#include "environment.h"
#include "milestone.h"
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
                //taking mi of of miles string then convert miles string to int
                string miles = arr[1].substr(0, arr[1].find("m"));
                stringstream mooles(miles);
                int mil = 0;
                mooles >> mil;
                milestone[milestoneStored].setMile(mil);
                milestoneStored++;
                }
            }
    }
    else{
        return -1;
    }
    return milestoneStored;
    file.close();
    return 0;
}
int main(){
    //int amount = 1600;
    //Party p(amount);
    string filename = "milestone.txt";
    int mileStored;
    Milestone milestone[15]={};
    readMilestone(filename, milestone, 0, 15);
    cout<< milestone[0].getName() << endl;
    cout<< milestone[0].getMile() << endl;
    cout<< milestone[1].getName() << endl;
    cout<< milestone[1].getMile() << endl;
    cout<< milestone[2].getName() << endl;
    cout<< milestone[2].getMile() << endl;
    cout<< milestone[3].getName() << endl;
    cout<< milestone[3].getMile() << endl;
    cout<< milestone[4].getName() << endl;
    cout<< milestone[4].getMile() << endl;
    cout<< milestone[5].getName() << endl;
    cout<< milestone[5].getMile() << endl;
    cout<< milestone[6].getName() << endl;
    cout<< milestone[6].getMile() << endl;
    cout<< milestone[7].getName() << endl;
    cout<< milestone[7].getMile() << endl;
    cout<< milestone[8].getName() << endl;
    cout<< milestone[8].getMile() << endl;
    cout<< milestone[9].getName() << endl;
    cout<< milestone[9].getMile() << endl;
    cout<< milestone[10].getName() << endl;
    cout<< milestone[10].getMile() << endl;
    cout<< milestone[11].getName() << endl;
    cout<< milestone[11].getMile() << endl;
    cout<< milestone[12].getName() << endl;
    cout<< milestone[12].getMile() << endl;
    cout<< milestone[13].getName() << endl;
    cout<< milestone[13].getMile() << endl;
    cout<< milestone[14].getName() << endl;
    cout<< milestone[14].getMile() << endl;
}