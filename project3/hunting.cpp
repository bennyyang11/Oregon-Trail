#include <iostream>
#include "party.h"
#include "supplies.h"
#include <stdlib.h> 
#include <time.h> 
using namespace std;
int Puzzle(){
    //generate number between 1-3
    int chance;
        srand (time(NULL));
        chance = rand() % 3 + 1;

    int guess1;
    //ask the user for 3 numbers between 1-10
    cout << "Guess a number between 1 and 3. You have 1 guess. Enter your guess now:" << endl;
    cin >> guess1;
    //determine if they got it right
    if(guess1 == chance){
        cout << "Success!" << endl;
        return 1;
    }

    if(guess1 != chance){
        cout << "Oh no! You were unsuccessful" << endl;
        return 0;
    }
    return 2;
}
void hunting(Supplies supplies[]){
    int chance;
    supplies[0].setBullets(15);
    int reply;
    int reply1;
    int reply2;
    int reply3;
    int reply4;
    int reply5;
    int reply6;
    int alive;
    cout << "would you like to hunt" << endl;
    cout <<"1. Yes" << endl;
    cout <<"2. No" << endl;
    cin >> reply;
    while (reply <= 0 || reply >= 3){
    cout <<"Please choose 1 or 2." << endl;
    cout << "would you like to hunt" << endl;
    cout <<"1. Yes" << endl;
    cout <<"2. No" << endl;
    cin >> reply;
    }
    if(reply == 1){
        srand (time(NULL));
        chance = rand() % 100 + 1;
        if (supplies[0].getBullets() <= 10){//checking for 10 bullets or less
            cout<<"HUNT WAS UNSUCCESSFUL, YOU DONT HAVE ANY BULLETS." << endl;
        }
        else if (supplies[0].getBullets() > 10){//checking to see if they have more than 10 bullets
            if (chance < 50){// checking to see if they encountered a rabbit
                cout <<"YOU GOT LUCKY! YOU ENCOUNTERED A RABBIT! DO YOU WANT TO HUNT:" << endl;
                cout <<"(1) YES, (2) NO" << endl;
                cin >> reply1;
                if(reply1 == 1){
                        if(supplies[0].getBullets() > 10){// check if there is 10 bullets
                            int result = Puzzle();
                            if(result == 1){
                                cout <<"HUNT WAS SUCCESSFUL, YOU GOT 5LB OF FOOD BUT LOST 10 BULLETS" << endl;
                                supplies[0].setBullets(supplies[0].getBullets()-10);
                                supplies[0].setFood(supplies[0].getFood()+5);
                            }
                            else{
                                cout << "HUNT WAS UNSUCCESSFUL, YOU LOST 10 BULLETS." << endl;
                                supplies[0].setBullets(supplies[0].getBullets()-10);
                            }
                        }
                }
                else if(supplies[0].getBullets() < 10){// hunt was not successful
                    cout << "HUNT WAS UNSUCCESSFUL, YOU LOST ALL YOUR BULLETS." << endl;
                    supplies[0].setBullets(0);
                }
            }
        }
    }
            if (chance < 25){// checking to see if they encounter a fox
                cout <<"YOU GOT LUCKY! YOU ENCOUNTERED A FOX! DO YOU WANT TO HUNT:" << endl;
                cout <<"(1) YES, (2) NO" << endl;
                cin >> reply2;
                if(reply2 == 1){
                    if(supplies[0].getBullets() > 10){// checking for 10 bullets for fox
                        int result = Puzzle();
                        if(result == 1){
                            cout <<"HUNT WAS SUCCESSFUL, YOU GOT 10LB OF FOOD BUT LOST 8 BULLETS" << endl;
                            supplies[0].setBullets(supplies[0].getBullets()-8);
                            supplies[0].setFood(supplies[0].getFood()+10);
                        }
                        else if(supplies[0].getBullets() < 10){// hunt was not successful
                            cout << "HUNT WAS UNSUCCESSFUL, YOU LOST 8 BULLETS." << endl;
                            supplies[0].setBullets(supplies[0].getBullets()-8);
                        }
                        cout <<"YOU GOT LUCKY! YOU ENCOUNTERED A RABBIT! DO YOU WANT TO HUNT:" << endl;
                        cout <<"(1) YES, (2) NO" << endl;
                        cin >> reply1;
                        if(supplies[0].getBullets() < 10){//hunt was no successful for rabbit
                            cout << "HUNT WAS UNSUCCESSFUL, YOU LOST ALL YOUR BULLETS." << endl;
                            supplies[0].setBullets(0);
                        }
                        else if(reply1 == 1){
                            int result = Puzzle();
                            if(result == 1){
                                cout <<"HUNT WAS SUCCESSFUL, YOU GOT 5LB OF FOOD BUT LOST 10 BULLETS" << endl;
                                supplies[0].setBullets(supplies[0].getBullets()-10);
                                supplies[0].setFood(supplies[0].getFood()+5);
                            }
                            else{
                                cout << "HUNT WAS UNSUCCESSFUL, YOU LOST 10 BULLETS." << endl;
                                supplies[0].setBullets(supplies[0].getBullets()-10);
                            }
                        }
                        
                    }
                    else if(supplies[0].getBullets() < 8){// hunt was not seccessful for fox
                        cout << "HUNT WAS UNSUCCESSFUL, YOU LOST ALL YOUR BULLETS." << endl;
                        supplies[0].setBullets(0);
                    }
                }
            }
            if (chance < 15){// checking to see if they encountered a dear
                cout <<"YOU GOT LUCKY! YOU ENCOUNTERED A DEAR! DO YOU WANT TO HUNT:" << endl;
                cout <<"(1) YES, (2) NO" << endl;
                cin >> reply3;
                if(reply3 == 1){
                    if(supplies[0].getBullets() > 10){// successful for dear
                        int result = Puzzle();
                            if(result == 1){
                                cout <<"HUNT WAS SUCCESSFUL, YOU GOT 60LB OF FOOD BUT LOST 5 BULLETS" << endl;
                                supplies[0].setBullets(supplies[0].getBullets()-5);
                                supplies[0].setFood(supplies[0].getFood()+60);
                            }
                            else{
                                cout << "HUNT WAS UNSUCCESSFUL, YOU LOST 5 BULLETS." << endl;
                                supplies[0].setBullets(supplies[0].getBullets()-5);
                            }
                        cout <<"YOU GOT LUCKY! YOU ENCOUNTERED A FOX! DO YOU WANT TO HUNT:" << endl;
                        cout <<"(1) YES, (2) NO" << endl;
                        cin >> reply2;
                        if(reply2 == 1){// checking to see if they wanted to hunt fox
                            if(supplies[0].getBullets() > 10){// successful hunt for the fox
                                int result = Puzzle();
                                if(result == 1){
                                    cout <<"HUNT WAS SUCCESSFUL, YOU GOT 10LB OF FOOD BUT LOST 8 BULLETS" << endl;
                                    supplies[0].setBullets(supplies[0].getBullets()-8);
                                    supplies[0].setFood(supplies[0].getFood()+10);
                                }
                                else if(supplies[0].getBullets() < 10){// hunt was not successful
                                    cout << "HUNT WAS UNSUCCESSFUL, YOU LOST 8 BULLETS." << endl;
                                    supplies[0].setBullets(supplies[0].getBullets()-8);
                                }
                                cout <<"YOU GOT LUCKY! YOU ENCOUNTERED A RABBIT! DO YOU WANT TO HUNT:" << endl;
                                cout <<"(1) YES, (2) NO" << endl;
                                cin >> reply1;
                                if(reply1 == 1){//checking to see if they wanted to hunt rabbit
                                    if(supplies[0].getBullets() > 10){//successful hunt for rabbit
                                        int result = Puzzle();
                                        if(result == 1){
                                            cout <<"HUNT WAS SUCCESSFUL, YOU GOT 5LB OF FOOD BUT LOST 10 BULLETS" << endl;
                                            supplies[0].setBullets(supplies[0].getBullets()-10);
                                            supplies[0].setFood(supplies[0].getFood()+5);
                                        }
                                        else{
                                            cout << "HUNT WAS UNSUCCESSFUL, YOU LOST 10 BULLETS." << endl;
                                            supplies[0].setBullets(supplies[0].getBullets()-10);
                                        }
                                    }
                                }
                                else if(supplies[0].getBullets() < 10){//hunt was not successful for rabbit
                                    cout << "HUNT WAS UNSUCCESSFUL, YOU LOST ALL YOUR BULLETS." << endl;
                                    supplies[0].setBullets(0);
                                }
                            }
                            else if(supplies[0].getBullets() < 8){//hunt was not successful for fox
                                cout << "HUNT WAS UNSUCCESSFUL, YOU LOST ALL YOUR BULLETS." << endl;
                                supplies[0].setBullets(0);
                            }
                        }
                    }
                    else if(supplies[0].getBullets() < 5){//hunt was not successful for dear
                        cout << "HUNT WAS UNSUCCESSFUL, YOU LOST ALL YOUR BULLETS." << endl;
                        supplies[0].setBullets(0);
                    }
                }
            }
            if (chance < 7){
                cout <<"YOU GOT LUCKY! YOU ENCOUNTERED A BEAR! DO YOU WANT TO HUNT:" << endl;
                cout <<"(1) YES, (2) NO" << endl;
                cin >> reply4;
                if(reply4 == 1){
                    if(supplies[0].getBullets() > 10){//hunt was successful for bear
                        int result = Puzzle();
                        if(result == 1){
                            cout <<"HUNT WAS SUCCESSFUL, YOU GOT 200LB OF FOOD BUT LOST 10 BULLETS" << endl;
                            supplies[0].setBullets(supplies[0].getBullets()-10);
                            supplies[0].setFood(supplies[0].getFood()+200);
                        }
                        else{
                            cout << "HUNT WAS UNSUCCESSFUL, YOU LOST 10 BULLETS." << endl;
                            supplies[0].setBullets(supplies[0].getBullets()-10);
                        }
                        cout <<"YOU GOT LUCKY! YOU ENCOUNTERED A DEAR! DO YOU WANT TO HUNT:" << endl;
                        cout <<"(1) YES, (2) NO" << endl;
                        cin >> reply3;
                        if(reply3 == 1){
                            if(supplies[0].getBullets() > 10){//hunt was successful for dear
                                int result = Puzzle();
                                if(result == 1){
                                    cout <<"HUNT WAS SUCCESSFUL, YOU GOT 60LB OF FOOD BUT LOST 5 BULLETS" << endl;
                                    supplies[0].setBullets(supplies[0].getBullets()-5);
                                    supplies[0].setFood(supplies[0].getFood()+60);
                                }
                                else{
                                cout << "HUNT WAS UNSUCCESSFUL, YOU LOST 10 BULLETS." << endl;
                                supplies[0].setBullets(supplies[0].getBullets()-10);
                                }
                                cout <<"YOU GOT LUCKY! YOU ENCOUNTERED A FOX! DO YOU WANT TO HUNT:" << endl;
                                cout <<"(1) YES, (2) NO" << endl;
                                cin >> reply2;
                                if(reply2 == 1){
                                    if(supplies[0].getBullets() > 10){//hunt was successful for fox
                                        int result = Puzzle();
                                        if(result == 1){
                                            cout <<"HUNT WAS SUCCESSFUL, YOU GOT 10LB OF FOOD BUT LOST 8 BULLETS" << endl;
                                            supplies[0].setBullets(supplies[0].getBullets()-8);
                                            supplies[0].setFood(supplies[0].getFood()+10);
                                        }
                                        else if(supplies[0].getBullets() < 10){// hunt was not successful
                                            cout << "HUNT WAS UNSUCCESSFUL, YOU LOST 8 BULLETS." << endl;
                                            supplies[0].setBullets(supplies[0].getBullets()-8);
                                        }
                                        cout <<"YOU GOT LUCKY! YOU ENCOUNTERED A RABBIT! DO YOU WANT TO HUNT:" << endl;
                                        cout <<"(1) YES, (2) NO" << endl;
                                        cin >> reply1;
                                        if(reply1 == 1){
                                            if(supplies[0].getBullets() > 10){// hunt was successful for rabbit
                                                int result = Puzzle();
                                                if(result == 1){
                                                    cout <<"HUNT WAS SUCCESSFUL, YOU GOT 5LB OF FOOD BUT LOST 10 BULLETS" << endl;
                                                    supplies[0].setBullets(supplies[0].getBullets()-10);
                                                    supplies[0].setFood(supplies[0].getFood()+5);
                                                }
                                                else if(supplies[0].getBullets() < 10){// hunt was not successful
                                                    cout << "HUNT WAS UNSUCCESSFUL, YOU LOST 8 BULLETS." << endl;
                                                    supplies[0].setBullets(supplies[0].getBullets()-10);
                                                }
                                            }
                                        }
                                        else if(supplies[0].getBullets() < 10){// unsuccessful hunt for rabbit
                                            cout << "HUNT WAS UNSUCCESSFUL, YOU LOST ALL YOUR BULLETS." << endl;
                                            supplies[0].setBullets(0);
                                        }
                                    }
                                    else if(supplies[0].getBullets() < 8){// unsuccessful hunt for fox
                                        cout << "HUNT WAS UNSUCCESSFUL, YOU LOST ALL YOUR BULLETS." << endl;
                                        supplies[0].setBullets(0);
                                    }
                                }
                            }
                            else if(supplies[0].getBullets() < 5){// unsuccessful hunt for dear
                                cout << "HUNT WAS UNSUCCESSFUL, YOU LOST ALL YOUR BULLETS." << endl;
                                supplies[0].setBullets(0);
                            }
                        }
                    }
                    else if(supplies[0].getBullets() < 10){// unsuccessful hunt for bear
                        cout << "HUNT WAS UNSUCCESSFUL, YOU LOST ALL YOUR BULLETS." << endl;
                        supplies[0].setBullets(0);
                    }
                }
            }
            if (chance < 5){
                cout <<"YOU GOT LUCKY! YOU ENCOUNTERED A MOOSE! DO YOU WANT TO HUNT:" << endl;
                cout <<"(1) YES, (2) NO" << endl;
                cin >> reply1;
                if(reply1 == 1){
                    if(supplies[0].getBullets() > 12){// hunt was successful for moose
                        int result = Puzzle();
                        if(result == 1){
                            cout <<"HUNT WAS SUCCESSFUL, YOU GOT 500LB OF FOOD BUT LOST 12 BULLETS" << endl;
                            supplies[0].setBullets(supplies[0].getBullets()-12);
                            supplies[0].setFood(supplies[0].getFood()+500);
                        }
                        else if(supplies[0].getBullets() < 10){// hunt was not successful
                            cout << "HUNT WAS UNSUCCESSFUL, YOU LOST 12 BULLETS." << endl;
                            supplies[0].setBullets(supplies[0].getBullets()-12);
                        }
                        cout <<"YOU GOT LUCKY! YOU ENCOUNTERED A BEAR! DO YOU WANT TO HUNT:" << endl;
                        cout <<"(1) YES, (2) NO" << endl;
                        cin >> reply4;
                        if(reply4 == 1){
                            if(supplies[0].getBullets() > 10){// hunt was successful for bear
                                int result = Puzzle();
                                if(result == 1){
                                    cout <<"HUNT WAS SUCCESSFUL, YOU GOT 200LB OF FOOD BUT LOST 10 BULLETS" << endl;
                                    supplies[0].setBullets(supplies[0].getBullets()-10);
                                    supplies[0].setFood(supplies[0].getFood()+200);
                                }
                                else{
                                    cout << "HUNT WAS UNSUCCESSFUL, YOU LOST 10 BULLETS." << endl;
                                    supplies[0].setBullets(supplies[0].getBullets()-10);
                                }
                                cout <<"YOU GOT LUCKY! YOU ENCOUNTERED A DEAR! DO YOU WANT TO HUNT:" << endl;
                                cout <<"(1) YES, (2) NO" << endl;
                                cin >> reply3;
                                if(reply3 == 1){
                                    if(supplies[0].getBullets() > 5){// hunt was successful for dear
                                        int result = Puzzle();
                                        if(result == 1){
                                            cout <<"HUNT WAS SUCCESSFUL, YOU GOT 60LB OF FOOD BUT LOST 5 BULLETS" << endl;
                                            supplies[0].setBullets(supplies[0].getBullets()-5);
                                            supplies[0].setFood(supplies[0].getFood()+60);
                                        }
                                        else{
                                            cout << "HUNT WAS UNSUCCESSFUL, YOU LOST 10 BULLETS." << endl;
                                            supplies[0].setBullets(supplies[0].getBullets()-10);
                                        }
                                        cout <<"YOU GOT LUCKY! YOU ENCOUNTERED A FOX! DO YOU WANT TO HUNT:" << endl;
                                        cout <<"(1) YES, (2) NO" << endl;
                                        cin >> reply2;
                                        if(reply2 == 1){
                                            if(supplies[0].getBullets() > 8){// hunt was successful for fox
                                                int result = Puzzle();
                                                if(result == 1){
                                                    cout <<"HUNT WAS SUCCESSFUL, YOU GOT 10LB OF FOOD BUT LOST 8 BULLETS" << endl;
                                                    supplies[0].setBullets(supplies[0].getBullets()-8);
                                                    supplies[0].setFood(supplies[0].getFood()+10);
                                                }
                                                else if(supplies[0].getBullets() < 10){// hunt was not successful
                                                    cout << "HUNT WAS UNSUCCESSFUL, YOU LOST 8 BULLETS." << endl;
                                                    supplies[0].setBullets(supplies[0].getBullets()-8);
                                                }
                                                cout <<"YOU GOT LUCKY! YOU ENCOUNTERED A RABBIT! DO YOU WANT TO HUNT:" << endl;
                                                cout <<"(1) YES, (2) NO" << endl;
                                                cin >> reply1;
                                                if(reply1 == 1){
                                                    if(supplies[0].getBullets() > 10){// hunt was successful for rabbit
                                                        int result = Puzzle();
                                                        if(result == 1){
                                                            cout <<"HUNT WAS SUCCESSFUL, YOU GOT 5LB OF FOOD BUT LOST 10 BULLETS" << endl;
                                                            supplies[0].setBullets(supplies[0].getBullets()-10);
                                                            supplies[0].setFood(supplies[0].getFood()+5);
                                                        }
                                                        else if(supplies[0].getBullets() < 10){// hunt was not successful
                                                            cout << "HUNT WAS UNSUCCESSFUL, YOU LOST 8 BULLETS." << endl;
                                                            supplies[0].setBullets(supplies[0].getBullets()-10);
                                                        }
                                                    }
                                                }
                                                else if(supplies[0].getBullets() < 10){// unseccessful hunt for rabbit
                                                    cout << "HUNT WAS UNSUCCESSFUL, YOU LOST ALL YOUR BULLETS." << endl;
                                                    supplies[0].setBullets(0);
                                                }
                                            }
                                            else if(supplies[0].getBullets() < 8){// unseccessful hunt for fox
                                                cout << "HUNT WAS UNSUCCESSFUL, YOU LOST ALL YOUR BULLETS." << endl;
                                                supplies[0].setBullets(0);
                                            }
                                        }
                                    }
                                    else if(supplies[0].getBullets() < 5){// unseccessful hunt for dear
                                        cout << "HUNT WAS UNSUCCESSFUL, YOU LOST ALL YOUR BULLETS." << endl;
                                        supplies[0].setBullets(0);
                                    }
                                }
                            }
                            else if(supplies[0].getBullets() < 10){// unseccessful hunt for bear
                                cout << "HUNT WAS UNSUCCESSFUL, YOU LOST ALL YOUR BULLETS." << endl;
                                supplies[0].setBullets(0);
                            }
                        }
                    }
                    else if(supplies[0].getBullets() < 12){// unseccessful hunt for moose
                        cout << "HUNT WAS UNSUCCESSFUL, YOU LOST ALL YOUR BULLETS." << endl;
                        supplies[0].setBullets(0);
                    }
                }
            }
            else if(reply == 2){
                cout <<"Continue on trip" << endl;
            }
            cout<<"Now since it is the end of the day" << endl;
            cout<<"How well do you want to eat?" << endl;
            cout<<"1.Poorly **2LB per person**"<< endl;
            cout<<"2.Moderately **3LB per person**"<< endl;
            cout<<"3.Well **4LB per person**"<< endl;
            cin >> reply6;
            while (reply6 <= 0 || reply6 >= 4){
            cout <<"Please choose a number between 1-3" << endl;
            cout<<"How well do you want to eat?" << endl;
            cout<<"1.Poorly **2LB per person**"<< endl;
            cout<<"2.Moderately **3LB per person**"<< endl;
            cout<<"3.Well **4LB per person**"<< endl;
            }
            if(reply6 == 1){
                for(int i = 0; i < 4; i++){
                    if(partymembers[i].getHealth() < 3){
                        alive++;
                    }
                }
                supplies[0].setFood(supplies[0].getFood() - (2*alive));
            } 
            else if(reply6 == 2){
                for(int i = 0; i < 4; i++){
                    if(partymembers[i].getHealth() < 3){
                        alive++;
                    }
                }   
                supplies[0].setFood(supplies[0].getFood() - (3*alive));
            }
            else if(reply6 == 3){
                for(int i = 0; i < 4; i++){
                    if(partymembers[i].getHealth() < 3){
                        alive++;
                    }
                }
                supplies[0].setFood(supplies[0].getFood() - (4*alive));
            }
            if(supplies[0].getFood()>1000){
                cout <<"You have to cut some food because you can only hold 1000lb on your wagon"<< endl;
                supplies[0].setFood(1000);
            }
}
int main(){
    Supplies supplies[1];
    hunting(supplies);
    return 0;
}