#include <iostream>
#include "supplies.h"
#include "player.h"
#include "party.h"
using namespace std;
int shopvisit = 0;
void shop(Supplies supplies[],Player player[]){
    int choice;
    if (shopvisit == 0){
        cout <<"1. Oxen ** $150 per Oxen **" << endl;
        cout <<"2. Food ** $0.5 per lb **" << endl;
        cout <<"3. Bullets ** A box of 20 bullets for $2 **" << endl;
        cout <<"4. Wheels ** $20 per wheel **" << endl;
        cout <<"5. Tongue ** $20 per tongue **" << endl;
        cout <<"6. Axel ** $20 per Axel **" << endl;
        cout <<"7. Medical kit ** $25 per kit **" << endl;
        cout <<"8. Quit" << endl;
        }
    else if(shopvisit == 1){
        cout <<"1. Oxen ** $187.5 per Oxen **" << endl;
        cout <<"2. Food ** $0.63 per lb **" << endl;
        cout <<"3. Bullets ** A box of 20 bullets for $2.5 **" << endl;
        cout <<"4. Wheels ** $25 per wheel **" << endl;
        cout <<"5. Tongue ** $25 per tongue **" << endl;
        cout <<"6. Axel ** $25 per Axel **" << endl;
        cout <<"7. Medical kit ** $31.25 per kit **" << endl;
        cout <<"8. Quit" << endl;
    }
    else if(shopvisit == 2){
        cout <<"1. Oxen ** $225 per Oxen **" << endl;
        cout <<"2. Food ** $0.75 per lb **" << endl;
        cout <<"3. Bullets ** A box of 20 bullets for $3 **" << endl;
        cout <<"4. Wheels ** $30 per wheel **" << endl;
        cout <<"5. Tongue ** $30 per tongue **" << endl;
        cout <<"6. Axel ** $30 per Axel **" << endl;
        cout <<"7. Medical kit ** $37.5 per kit **" << endl;
        cout <<"8. Quit" << endl;
    }
    else if(shopvisit == 3){
        cout <<"1. Oxen ** $262.5 per Oxen **" << endl;
        cout <<"2. Food ** $0.88 per lb **" << endl;
        cout <<"3. Bullets ** A box of 20 bullets for $3.5 **" << endl;
        cout <<"4. Wheels ** $35 per wheel **" << endl;
        cout <<"5. Tongue ** $35 per tongue **" << endl;
        cout <<"6. Axel ** $35 per Axel **" << endl;
        cout <<"7. Medical kit ** $43.75 per kit **" << endl;
        cout <<"8. Quit" << endl;
    }
    else{
        cout <<"1. Oxen ** $300 per Oxen **" << endl;
        cout <<"2. Food ** $1 per lb **" << endl;
        cout <<"3. Bullets ** A box of 20 bullets for $4 **" << endl;
        cout <<"4. Wheels ** $40 per wheel **" << endl;
        cout <<"5. Tongue ** $40 per tongue **" << endl;
        cout <<"6. Axel ** $40 per Axel **" << endl;
        cout <<"7. Medical kit ** $50 per kit **" << endl;
        cout <<"8. Quit" << endl;
    }
    cin >> choice;
    while (choice <=0 || choice > 8){
        cout <<"Please select a number 1-6" << endl;
        if (shopvisit == 0){
        cout <<"1. Oxen ** $150 per Oxen **" << endl;
        cout <<"2. Food ** $0.5 per lb **" << endl;
        cout <<"3. Bullets ** A box of 20 bullets for $2 **" << endl;
        cout <<"4. Wheels ** $20 per wheel **" << endl;
        cout <<"5. Tongue ** $20 per tongue **" << endl;
        cout <<"6. Axel ** $20 per Axel **" << endl;
        cout <<"7. Medical kit ** $25 per kit **" << endl;
        cout <<"8. Quit" << endl;
        }
        else if(shopvisit == 1){
        cout <<"1. Oxen ** $187.5 per Oxen **" << endl;
        cout <<"2. Food ** $0.63 per lb **" << endl;
        cout <<"3. Bullets ** A box of 20 bullets for $2.5 **" << endl;
        cout <<"4. Wheels ** $25 per wheel **" << endl;
        cout <<"5. Tongue ** $25 per tongue **" << endl;
        cout <<"6. Axel ** $25 per Axel **" << endl;
        cout <<"7. Medical kit ** $31.25 per kit **" << endl;
        cout <<"8. Quit" << endl;
        }
        else if(shopvisit == 2){
        cout <<"1. Oxen ** $225 per Oxen **" << endl;
        cout <<"2. Food ** $0.75 per lb **" << endl;
        cout <<"3. Bullets ** A box of 20 bullets for $3 **" << endl;
        cout <<"4. Wheels ** $30 per wheel **" << endl;
        cout <<"5. Tongue ** $30 per tongue **" << endl;
        cout <<"6. Axel ** $30 per Axel **" << endl;
        cout <<"7. Medical kit ** $37.5 per kit **" << endl;
        cout <<"8. Quit" << endl;
        }
        else if(shopvisit == 3){
        cout <<"1. Oxen ** $262.5 per Oxen **" << endl;
        cout <<"2. Food ** $0.88 per lb **" << endl;
        cout <<"3. Bullets ** A box of 20 bullets for $3.5 **" << endl;
        cout <<"4. Wheels ** $35 per wheel **" << endl;
        cout <<"5. Tongue ** $35 per tongue **" << endl;
        cout <<"6. Axel ** $35 per Axel **" << endl;
        cout <<"7. Medical kit ** $43.75 per kit **" << endl;
        cout <<"8. Quit" << endl;
        }
        else{
        cout <<"1. Oxen ** $300 per Oxen **" << endl;
        cout <<"2. Food ** $1 per lb **" << endl;
        cout <<"3. Bullets ** A box of 20 bullets for $4 **" << endl;
        cout <<"4. Wheels ** $40 per wheel **" << endl;
        cout <<"5. Tongue ** $40 per tongue **" << endl;
        cout <<"6. Axel ** $40 per Axel **" << endl;
        cout <<"7. Medical kit ** $50 per kit **" << endl;
        cout <<"8. Quit" << endl;
        }
        cin >> choice;
        if (choice <= 0 || choice > 8){
            cout <<"Please enter a number from 1-8" << endl;
        }
    }
    while(choice <= 7){
        if(choice == 1){
            int oxenCount;
            int oxenCost;
            int yokeRec;
            int yokeCount;
            int yokeCost;
            cout <<"How many Oxen like to buy?" << endl;
            cout <<"** MUST PURCHASE A YOKE FOR EVERY 2 OXEN**"<< endl;
            cin >> oxenCount;
            if(shopvisit == 0){
                oxenCost = 150 * oxenCount;
            }
            else if(shopvisit == 1){
                oxenCost = 187.5 * oxenCount;
            }
            else if(shopvisit == 2){
                oxenCost = 225 * oxenCount;
            }
            else if(shopvisit == 3){
                oxenCost = 262.5 *  oxenCount;
            }
            else{
                oxenCost = 300 * oxenCount;
            }
            if (player[0].getMoney() > oxenCost){
                player[0].setMoney(player[0].getMoney()-oxenCost);
                cout <<"You have " << player[0].getMoney() <<" dollars remaining." << endl;
                supplies[0].setOxen(oxenCount);
            }
            else if(oxenCost > player[0].getMoney()){
                cout <<"You don't have enought to buy that." << endl;
            }
            yokeRec = oxenCount/2;
            cout <<"How many Yokes would you like to buy? ** $40 per yoke **" << endl;
            cout <<"We recommend you buy "<< yokeRec << endl;
            cin >> yokeCount;
            if(shopvisit == 0){
                yokeCost = yokeCount * 40;
            }
            else if(shopvisit == 1){
                yokeCost = yokeCount * 50;
            }
            else if(shopvisit == 2){
                yokeCost = yokeCount * 60;
            }
            else if(shopvisit == 3){
                yokeCost = yokeCount * 70;
            }
            else{
                yokeCost = yokeCount * 80;
            }
            if(yokeCost < player[0].getMoney()){
                player[0].setMoney(player[0].getMoney()-yokeCost);
                cout <<"You have " << player[0].getMoney() <<" dollars remaining." << endl;
                supplies[0].setYoke(yokeCount);
                
            }
            else if(player[0].getMoney() < yokeCost){
                cout <<"You don't have enought to buy that." << endl;
            }
        }
        else if(choice == 2){
            int foodCount;
            double foodCost;
            cout <<"How many pounds of food would you like to buy?" << endl;
            cout <<"** RECOMMEND 200LB OF FOOD PER PERSON**"<< endl;
            cin >> foodCount;
            if(shopvisit == 0){
                foodCost = 0.50 * foodCount;
            }
            else if(shopvisit == 1){
                foodCost = 0.63 * foodCount;
            }
            else if(shopvisit == 2){
                foodCost = 0.75 * foodCount;
            }
            else if(shopvisit == 3){
                foodCost = 0.88 * foodCount;
            }
            else{
                foodCost = 1 * foodCount;
            }
            if(player[0].getMoney() > foodCost){
                player[0].setMoney(player[0].getMoney()-foodCost);
                cout <<"You have " << player[0].getMoney() <<" dollars remaining." << endl;
                supplies[0].setFood(foodCount);
            }
            else if(player[0].getMoney() < foodCost){
                cout <<"You don't have enought to buy that." << endl;
            }
        }
        else if(choice == 3){
            int bulletCount;
            int bulletCost;
            cout <<"How many boxes of bullets would you like to buy?" << endl;
            cin >> bulletCount;
            if(shopvisit == 0){
                bulletCost = bulletCount * 2;
            }
            else if(shopvisit == 1){
                bulletCost = bulletCount * 2.5;
            }
            else if(shopvisit == 2){
                bulletCost = bulletCount * 3;
            }
            else if(shopvisit == 3){
                bulletCost = bulletCount * 3.5;
            }
            else{
                bulletCost = bulletCount * 4;
            }
            if(player[0].getMoney() > bulletCost){
                player[0].setMoney(player[0].getMoney()- bulletCost);
                cout <<"You have " << player[0].getMoney() <<" dollars remaining." << endl;
                supplies[0].setBullets(bulletCount);
            }
            else if(player[0].getMoney() < bulletCost){
                cout <<"You don't have enought to buy that." << endl;
            }
        }
        else if(choice == 4){
            int wheelCount;
            int wheelCost;
            cout <<"How many wheels would you like to buy?" << endl;
            cin >> wheelCount;
            if (shopvisit == 0){
                wheelCost = wheelCount * 20;
            }
            else if (shopvisit == 1){
                wheelCost = wheelCount * 25;
            }
            else if (shopvisit == 2){
                wheelCost = wheelCount * 30;
            }
            else if (shopvisit == 3){
                wheelCost = wheelCount * 35;
            }
            else{
                wheelCost = wheelCount * 40;
            }
            if(player[0].getMoney() > wheelCost){
                player[0].setMoney(player[0].getMoney()- wheelCost);
                cout <<"You have " << player[0].getMoney() <<" dollars remaining." << endl;
                supplies[0].setWheels(wheelCount);
            }
            else if(player[0].getMoney() < wheelCost){
                cout <<"You don't have enought to buy that." << endl;
            }
        }
        else if (choice == 5){
            int tongueCount;
            int tongueCost;
            cout <<"How many tongues would you like to buy for your wagon?" << endl;
            cin >> tongueCount;
            if(shopvisit == 0){
                tongueCost = tongueCount * 20;
            }
            else if(shopvisit == 1){
                tongueCost = tongueCount * 25;
            }
            else if(shopvisit == 2){
                tongueCost = tongueCount * 30;
            }
            else if(shopvisit == 3){
                tongueCost = tongueCount * 35;
            }
            else{
                tongueCost = tongueCount * 40;
            }
            if(player[0].getMoney() > tongueCost){
                player[0].setMoney(player[0].getMoney() - tongueCost);
                cout <<"You have " << player[0].getMoney() <<" dollars remaining." << endl;
                supplies[0].setTongue(tongueCount);
            }
            else if(player[0].getMoney() < tongueCost){
                cout <<"You don't have enought to buy that." << endl;
            }
        }
        else if(choice == 6){
            int axelCount;
            int axelCost;
            cout <<"How many axels would you like to buy for your wagon?" << endl;
            cin >> axelCount;
            if (shopvisit == 0){
                axelCost = axelCount * 20;
            }
            else if (shopvisit == 1){
                axelCost = axelCount * 25;
            }
            else if (shopvisit == 2){
                axelCost = axelCount * 30;
            }
            else if (shopvisit == 3){
                axelCost = axelCount * 35;
            }
            else{
                axelCost = axelCount * 40;
            }
            if(player[0].getMoney() > axelCost){
                player[0].setMoney(player[0].getMoney() - axelCost);
                cout <<"You have " << player[0].getMoney() <<" dollars remaining." << endl;
                supplies[0].setAxel(axelCount);
            }
            else if(player[0].getMoney() < axelCost){
                cout <<"You don't have enought to buy that." << endl;
            }
        }
        else if(choice == 7){
            int medicalkitCount;
            int medicalkitCost;
            cout <<"How many medical kits would you like to buy?" << endl;
            cin >> medicalkitCount;
            if(shopvisit == 0){
                medicalkitCost = medicalkitCount * 25;
            }
            if(shopvisit == 1){
                medicalkitCost = medicalkitCount * 31.25;
            }
            if(shopvisit == 2){
                medicalkitCost = medicalkitCount * 37.5;
            }
            if(shopvisit == 3){
                medicalkitCost = medicalkitCount * 43.75;
            }
            else{
                medicalkitCost = medicalkitCount * 50;
            }
            if(player[0].getMoney() > medicalkitCost){
                player[0].setMoney(player[0].getMoney() - medicalkitCost);
                cout <<"You have " << player[0].getMoney() <<" dollars remaining." << endl;
                supplies[0].setMedicalKit(medicalkitCount);
            }
            else if(player[0].getMoney() < medicalkitCost){
                cout <<"You don't have enought to buy that." << endl;
            }
        }
        if (shopvisit == 0){
        cout <<"1. Oxen ** $150 per Oxen **" << endl;
        cout <<"2. Food ** $0.5 per lb **" << endl;
        cout <<"3. Bullets ** A box of 20 bullets for $2 **" << endl;
        cout <<"4. Wheels ** $20 per wheel **" << endl;
        cout <<"5. Tongue ** $20 per tongue **" << endl;
        cout <<"6. Axel ** $20 per Axel **" << endl;
        cout <<"7. Medical kit ** $25 per kit **" << endl;
        cout <<"8. Quit" << endl;
        }
        else if(shopvisit == 1){
        cout <<"1. Oxen ** $187.5 per Oxen **" << endl;
        cout <<"2. Food ** $0.63 per lb **" << endl;
        cout <<"3. Bullets ** A box of 20 bullets for $2.5 **" << endl;
        cout <<"4. Wheels ** $25 per wheel **" << endl;
        cout <<"5. Tongue ** $25 per tongue **" << endl;
        cout <<"6. Axel ** $25 per Axel **" << endl;
        cout <<"7. Medical kit ** $31.25 per kit **" << endl;
        cout <<"8. Quit" << endl;
        }
        else if(shopvisit == 2){
        cout <<"1. Oxen ** $225 per Oxen **" << endl;
        cout <<"2. Food ** $0.75 per lb **" << endl;
        cout <<"3. Bullets ** A box of 20 bullets for $3 **" << endl;
        cout <<"4. Wheels ** $30 per wheel **" << endl;
        cout <<"5. Tongue ** $30 per tongue **" << endl;
        cout <<"6. Axel ** $30 per Axel **" << endl;
        cout <<"7. Medical kit ** $37.5 per kit **" << endl;
        cout <<"8. Quit" << endl;
        }
        else if(shopvisit == 3){
        cout <<"1. Oxen ** $262.5 per Oxen **" << endl;
        cout <<"2. Food ** $0.88 per lb **" << endl;
        cout <<"3. Bullets ** A box of 20 bullets for $3.5 **" << endl;
        cout <<"4. Wheels ** $35 per wheel **" << endl;
        cout <<"5. Tongue ** $35 per tongue **" << endl;
        cout <<"6. Axel ** $35 per Axel **" << endl;
        cout <<"7. Medical kit ** $43.75 per kit **" << endl;
        cout <<"8. Quit" << endl;
        }
        else{
        cout <<"1. Oxen ** $300 per Oxen **" << endl;
        cout <<"2. Food ** $1 per lb **" << endl;
        cout <<"3. Bullets ** A box of 20 bullets for $4 **" << endl;
        cout <<"4. Wheels ** $40 per wheel **" << endl;
        cout <<"5. Tongue ** $40 per tongue **" << endl;
        cout <<"6. Axel ** $40 per Axel **" << endl;
        cout <<"7. Medical kit ** $50 per kit **" << endl;
        cout <<"8. Quit" << endl;
        }
        cin >> choice;
        if (choice <= 0 || choice > 8){
            cout <<"Please enter a number from 1-8" << endl;
        }
    }
    if (choice == 8){
            cout <<"Thank you for visiting the shop!" << endl;
    }
    shopvisit++;
}
int main(){
    Supplies supplies[1];
    Player player[1];
    shop(supplies,player);
}