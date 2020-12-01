//Tyler Evans
//WRTG 2010-058 Universty of Utah
//Free software anybody can use
//this game was made for a project in WRTG 2010-058
#include <iostream>
#include <cstring>
#include <ctime>
#include <string>
#include <cmath>
#include <vector>
#include <ostream>
using namespace std;
// I am using namespace because I know that it will not colide with another lib.
const char MC[6]="clear";
void entercon();
//basic functions needed for game functionailty
void credits();
//this simply is the credits for the entire game.
int start(int& a);
//this sets up the bool statement passes by refrence
void tot();
string getName(string& in1);
//gets name
int end(int& a);
//This ends the game with bool statement
void gameMenu(string n1, int& day, int& level, int& money, int& expenses);
int mainmenu();
// main menu
// here are the key infomation functions that are key information
void level1();
void level2();
void level3();
void level4();
void humanMod();
//here is the game over function it is hard to get ha ha....
void gameOver();
// here is the main
// here is the main
// it is hard to see
int main(){
    //this will be the main loop of the game
    system(MC);
    cout << "This project is a student Project" << endl;
    cout << "By Tyler Evans U1313811 on 1.12.2020" << endl;
    cout << "Student at the Universty of Utah" << endl;
    cout << "This will not have save options due to " << endl;
    cout << "Not wanting to create unwanted files on others systems" << endl;
    cout << "Any Opinions displayed do not reflect the authors" << endl;
    cout << "This is a work made for an WRTG2010-058 project however the concepts found throughout" << endl;
    cout << "are factual through various papers that will be acredited on the credits" << endl;
    cout << "This software will be avaible online for free on gitHub" << endl;
    cout << "This Software is free and credits to the sources will be in IEEE" << endl;
    cout << "Thank you so much!" << endl;
    entercon();
    system(MC);
    // THIS IS THE GAME LOOP
    //                        1 2 3 4 5 6
    //here is the day and name varibles
    string name="#$%@º";
    int day=0;
    int money = 10000;
    int level = 1;
    int expenses = 0;
    //gets the main action loop
    int gameaction = 0;
    gameaction = mainmenu();
    if (gameaction == 1){
        tot();
        getName(name);
        cout << "Welcome " << name << endl;
        gameMenu(name, day, level, money, expenses);
    }
    if (gameaction == 2){
            //will add actions here
            level1();
            getName(name);
            gameMenu(name, day, level, money, expenses);
    }
    if (gameaction == 3){
        cout << endl;
    }
    if(gameaction == 4){
        cout << "exit action" << endl;
    }
    //END OF GAME LOOP
    //exit from game loop last messages
    cout << "Thank you for playing see you again next time!" << endl;
    entercon();
    return 0;
}





void entercon(){
    cout << "Press enter to continue" << endl;
    cin.get();
}

void gameMenu(string n1, int& day, int& level, int& money, int& expenses){
    bool gamestate = true;
    string mainre;
    vector<string> anLev ={ "C", "S", "G", "C2", "S2", "G2", "GC", "GS" "GG", "GC2", "GS2", "GG2"};
    vector<string> anLevname = {"Cow" , "Swine", "Goat", "Cow lv2", "Swine lv2", "Goat lv2", "GM Cow" "GM Swine", "GM Goat", "GM Cow lv2", "GM Swine lv2", "Gm goat lv2"};
    vector<int> anPrice = {500, 300, 400};
    vector<string> anPlant ={"W", "O", "Co", "W2", "O2", "Co2", "GMW", "GMO", "GMC", "GMW2", "GMO2", "GMC2"};
    vector<string> anPlantName = {"Wheat", "Oat", "Corn", "Wheat lv2", "Oat lv2", "Corn lv2", "GM Wheat lvl3", "GM Oats lv3", "GM Corn lv3", "GM Wheat lv4", "GM Oats lv4", "GM Corn lv4" };
    vector<int> planPrice={450, 150, 200};
    //these are the fields
    vector<string> f1 = {};
    vector<string> f2 = {};
    vector<string> f3 = {};
    vector<string> f4 = {};
    // these are the pens
    vector<string> p1 ={};
    vector<string> p2 ={};
    // here are the caps
    int cap1 =4;
    int acap1 =0;
    int acap2 = 0;
    int pancap1 = 0;
    int pancap2 = 0;
    int pancap3 = 0;
    int pancap4 = 0;
    while(gamestate == true){
        system(MC);
        cin.clear();
          int exs = 0;
        cout << "######  ###  #####  ###  ### " << endl;
        cout << "#      ## ## #   ## ## ## ## " << endl;
        cout << "###    ##### #####  ## ## ## " << endl;
        cout << "#      ## ## #   ## ## ## ## " << endl;
        cout << " " << endl;
        cout << "Day " << day << endl;
        cout << "{feild1}{feild2}{feild3}{feild4}" <<  endl;
        cout << "{pen1}{pen2}" << endl;
        cout << "Money R " << money << " Level " << level << endl;
        cout << n1  << "'s Farm" << endl;
        cout << "Options:" << endl;
        cout << "Animal Pens -> 1" << endl;
        cout << "Plants -> 2" << endl;
        cout << "Sleep" << endl; //done
        cout << "Lab" << endl; //done
        cout << "Exit to main menu ->(Exit)" << endl;
        cout << "Which option?:";
        getline(cin, mainre);
        //this is the exit loop
        if((mainre =="exit" ) || (mainre =="Exit")){
            cin.clear();
            string lastwords = "";
            cout << "This will erase all of your progress are you sure?" << endl;
            cout << "(yes/no)";
            cin >> lastwords;
            if((lastwords == "yes") || (lastwords == "Yes")){
                gamestate = false;
                mainmenu();
            }
            else{
                cin.clear();
            }
        }
    if(mainre == "Wonderbar"){
        money += 100000000;
    }
        if((day == 100) && (money >= 10000000)){
            cout << "You won good job" << endl;
        }
        else if((day == 100) && (money <= 10000000)){
            gameOver();
            gamestate = false;
            
    }
        if(mainre == "1"){
            //basic varibles
            bool penstate = true;
            while (penstate == true){
            string penre ="";
            //this is the animal pins
            cin.clear();
            cout << "Pen1 -> 1" << endl;
            cout << "Pen2 -> 2" << endl;
                cout << "exit -> 3" << endl;
            cout << "Which pen?";
            cin >> penre;
                if(penre == "1"){
                bool pen1state = true;
                    string secondr;
                while(pen1state == true){
              //give option to view
                    cin.clear();
                    cout  << "Pen 1" << endl;
                    cout << "view -> 1" << endl;
                    cout << "buy -> 2" << endl;
                    cout << "exit pen 1 -> 3" << endl;
                    cout << "?:";
                    cin >> secondr;
                    if(secondr == "1"){
                        for(size_t u=0; u < p1.size(); u++){
                            cout << p1[u] << endl;
                        }
                    }
                    if(secondr == "3"){
                        pen1state = false;
                    }
                    if(secondr == "2"){
                        cout << "welcome to the buying menu ..." << endl;
                        cout << "OPTIONS:" << endl;
                        for(int z = 0; z < anLevname.size(); z++){
                            cout << "item " << anLevname[z] << " cost R " << anPrice[(z % 3)]  << " Option " << (z + 1) << endl;
                        }
                        cout << "All items that are on your level shall be nearly double the amount paid" << endl;
                        bool otherstate = true;
                        string substring = "";
                        while(otherstate == true){
                            cin.clear();
                            cout << "if you would like to get out of this menu simply type exit" << endl;
                            cout << "state the number which one?:";
                            cin >> substring;
                            if (substring == "exit"){
                                otherstate = false;
                            }
                            if(acap1 == cap1){
                                cout << "you can no longer add any more" << endl;
                                otherstate = false;
                            }
                            if((substring == "1")&& (acap1 != cap1)){
                                p1.push_back(anLev[0]);
                                acap1 += 1;
                            }
                            else if((substring == "2") && (acap1 != cap1)){
                                p1.push_back(anLev[1]);
                                acap1 +=1;
                            }
                            else if((substring == "3") && (acap1 != cap1)){
                                                          p1.push_back(anLev[2]);
                                acap1 +=1;
                                                      }
                            else if((substring == "4") && (acap1 != cap1)){
                                                          p1.push_back(anLev[3]);
                                acap1 +=1;
                                                      }
                            else if((substring == "5") && (acap1 != cap1)){
                                                          p1.push_back(anLev[4]);
                                acap1 +=1;
                                                      }
                            else if((substring == "6") && (acap1 != cap1)){
                                                          p1.push_back(anLev[5]);
                                acap1 +=1;
                                                      }
                            else if((substring == "7") && (acap1 != cap1)){
                                p1.push_back(anLev[6]);
                                acap1 +=1;
                                                      }
                            else if((substring == "8") && (acap1 != cap1)){
                                                          p1.push_back(anLev[7]);
                                                          acap1 +=1;
                                                                                }
                            else if((substring == "9") && (acap1 != cap1)){
                                                          p1.push_back(anLev[8]);
                                                          acap1 +=1;
                                                                                }
                        else if((substring == "10") && (acap1 != cap1)){
                                                      p1.push_back(anLev[9]);
                                                      acap1 +=1;
                                        }
                        else if((substring == "11") && (acap1 != cap1)){
                                                      p1.push_back(anLev[10]);
                                                      acap1 +=1;
                                                                            }
                            else if((substring == "12") && (acap1 != cap1)){
                                                          p1.push_back(anLev[11]);
                                                          acap1 +=1;
                                                                                }
                            else{
                                cout << "enter in valid input please" << endl;
                            }
                        }//end of while loop
                    if (secondr == "3"){
                        cin.clear();
                        pen1state = false;
                        }
                //goes through each of the items in the pen
                //give option to sale
            }
                }
                    if(secondr == "3"){
                        penstate = false;
                    }
            }//end of pen loop 1
            if(penre == "2"){
                bool pen2state = true;
                                   string secondro;
        while(pen2state == true){
                             //give option to view
                                   cin.clear();
                                    cout  << "Pen 2" << endl;
                                   cout << "view -> 1" << endl;
                                   cout << "buy -> 2" << endl;
                                   cout << "exit pen 2 -> 3" << endl;
                                   cout << "?:";
                                   cin >> secondro;
            if(secondro == "3"){
                pen2state = false;
            }
                                   if(secondro == "1"){
                                       for(size_t u=0; u < p2.size(); u++){
                                           cout << p2[u] << endl;
                                       }
                                   }
                                   if(secondro == "2"){
                                       cout << "welcome to the buying menu ..." << endl;
                                       cout << "OPTIONS:" << endl;
                                       for(int z = 0; z < anLevname.size(); z++){
                                           cout << "item " << anLevname[z] << " cost R " << anPrice[(z % 3)]  << " Option " << (z + 1) << endl;
                                       }
                                   }
                                       bool otherstate = true;
                                       string substring = "";
                                       while(otherstate == true){
                                           cin.clear();
                                           cout << "if you would like to get out of this menu simply type exit" << endl;
                                           cout << "state the number which one?:";
                                           cin >> substring;
                                           if (substring == "exit"){
                                               otherstate = false;
                                           }
                                           if(acap2 == cap1){
                                               cout << "you can no longer add any more" << endl;
                                               otherstate = false;
                                           }
                                           if((substring == "1")&& (acap2 != cap1)){
                                               p2.push_back(anLev[0]);
                                               acap2 += 1;
                                           }
                                           else if((substring == "2") && (acap2 != cap1)){
                                               p2.push_back(anLev[1]);
                                               acap2 +=1;
                                           }
                                           else if((substring == "3") && (acap2 != cap1)){
                                                                         p2.push_back(anLev[2]);
                                               acap2 +=1;
                                                                     }
                                           else if((substring == "4") && (acap2 != cap1)){
                                                                         p2.push_back(anLev[3]);
                                               acap2 +=1;
                                                                     }
                                           else if((substring == "5") && (acap2 != cap1)){
                                                                         p2.push_back(anLev[4]);
                                               acap2 +=1;
                                                                     }
                                           else if((substring == "6") && (acap2 != cap1)){
                                                                         p2.push_back(anLev[5]);
                                               acap2 +=1;
                                                                     }
                                           else if((substring == "7") && (acap2 != cap1)){
                                               p1.push_back(anLev[6]);
                                               acap2 +=1;
                                                                     }
                                           else if((substring == "8") && (acap2 != cap1)){
                                                                         p2.push_back(anLev[7]);
                                                                         acap2 +=1;
                                                                                               }
                                           else if((substring == "9") && (acap2 != cap1)){
                                                                         p2.push_back(anLev[8]);
                                                                         acap2 +=1;
                                                                                               }
                                       else if((substring == "10") && (acap2 != cap1)){
                                                                     p2.push_back(anLev[9]);
                                                                     acap2 +=1;
                                                       }
                                       else if((substring == "11") && (acap2 != cap1)){
                                                                     p2.push_back(anLev[10]);
                                                                     acap2 +=1;
                                                                                           }
                                           else if((substring == "12") && (acap2 != cap1)){
                                                                         p2.push_back(anLev[11]);
                                                                         acap2 +=1;
                                                                                               }
                                           else{
                                               cout << "enter in valid input please" << endl;
                                           }
                                       }//end of while loop
                                   }
                                   if (secondro == "3"){
                                       cin.clear();
                                       pen2state = false;
                                       }
                               //goes through each of the items in the pen
                               //give option to sale
                           }
                
            
            if(penre == "3"){
                penstate = false;
                system(MC);
            }
            }
        }//end of while loop
            // now with the plants
            if(mainre == "2"){
                //basic varibles
                         bool penstatee = true;
                         while (penstatee == true){
                         string penreo ="";
                         //this is the animal pins
                         cin.clear();
                         cout << "Field 1 -> 1" << endl;
                         cout << "Field 2 -> 2" << endl;
                             cout << "Field 3 -> 3" << endl;
                             cout << "Field 4 -> 4" << endl;
                             cout << "exit -> 5" << endl;
                         cout << "Which field?";
                         cin >> penreo;
                if(penreo == "1"){
                             bool pen1statee = true;
                        string secondrr;
                            while(pen1statee == true){
                           //give option to view
                                 cin.clear();
                                cout  << "Field 1" << endl;
                                 cout << "view -> 1" << endl;
                                 cout << "buy -> 2" << endl;
                                 cout << "exit feild 1 -> 3" << endl;
                                 cout << "?:";
                                 cin >> secondrr;
                                if(secondrr == "3"){
                                    pen1statee = false;
                                }
                                 if(secondrr == "1"){
                                     for(size_t uu=0; uu < f1.size(); uu++){
                                         cout << f1[uu] << endl;
                                     }
                                 }
                                 if(secondrr == "2"){
                                     cout << "welcome to the buying menu ..." << endl;
                                     cout << "OPTIONS:" << endl;
                                     for(int zz = 0; zz < anPlantName.size(); zz++){
                                         cout << "item " << anPlantName[zz] << " cost R " << anPrice[(zz % 3)]  << " Option " << (zz + 1) << endl;
                                     }
                                     cout << "All items that are on your level shall be nearly double the amount paid" << endl;
                                     bool otherstatee = true;
                                     string substringe = "";
                                     while(otherstatee == true){
                                         cin.clear();
                                         cout << "if you would like to get out of this menu simply type exit" << endl;
                                         cout << "state the number which one?:";
                                         cin >> substringe;
                                         if (substringe == "exit"){
                                             otherstatee = false;
                                         }
                                         if(pancap1 == cap1){
                                             cout << "you can no longer add any more" << endl;
                                             otherstatee = false;
                                         }
                                         if((substringe == "1")&& (pancap1 != cap1)){
                                             f1.push_back(anPlant[0]);
                                             pancap1 += 1;
                                         }
                                         else if((substringe == "2") && (pancap1 != cap1)){
                                             f1.push_back(anPlant[1]);
                                             pancap1 +=1;
                                         }
                                         else if((substringe == "3") && (pancap1 != cap1)){
                                                                       f1.push_back(anPlant[2]);
                                             pancap1 +=1;
                                                                   }
                                         else if((substringe == "4") && (pancap1 != cap1)){
                                                                       f1.push_back(anPlant[3]);
                                             pancap1 +=1;
                                                                   }
                                         else if((substringe == "5") && (pancap1 != cap1)){
                                                                       f1.push_back(anPlant[4]);
                                             pancap1 +=1;
                                                                   }
                                         else if((substringe == "6") && (pancap1 != cap1)){
                                                                       f1.push_back(anPlant[5]);
                                             pancap1 +=1;
                                                                   }
                                         else if((substringe == "7") && (pancap1 != cap1)){
                                             f1.push_back(anPlant[6]);
                                             pancap1 +=1;
                                                                   }
                                         else if((substringe == "8") && (pancap1 != cap1)){
                                                                       f1.push_back(anPlant[7]);
                                                                       pancap1 +=1;
                                                                                             }
                                         else if((substringe == "9") && (pancap1 != cap1)){
                                                                       f1.push_back(anPlant[8]);
                                                                       pancap1 +=1;
                                                                                             }
                                     else if((substringe == "10") && (pancap1 != cap1)){
                                                                   f1.push_back(anPlant[9]);
                                                                   pancap1 +=1;
                                                     }
                                     else if((substringe == "11") && (pancap1 != cap1)){
                                                                   f1.push_back(anPlant[10]);
                                                                   pancap1 +=1;
                                                                                         }
                                         else if((substringe == "12") && (pancap1 != cap1)){
                                                                       f1.push_back(anPlant[11]);
                                                                       pancap1 +=1;
                                                                                             }
                                         else{
                                             cout << "enter in valid input please" << endl;
                                         }
                                         if((substringe == "exit") || (substringe == "Exit")){
                                             otherstatee = false;
                                         }
                                         if (secondrr == "3"){
                                             cin.clear();
                                             pen1statee = false;
                                             }
                                     }//end of while loop
                                 }
                                if (secondrr == "3"){
                                    cin.clear();
                                    pen1statee = false;
                                    }
                                }
                }
                                 if(penreo == "2"){
                                   bool pen1statee = true;
                                     string secondrr;
                                   while(pen1statee == true){
                                 //give option to view
                                       cin.clear();
                                       cout  << "Field 2" << endl;
                                       cout << "view -> 1" << endl;
                                       cout << "buy -> 2" << endl;
                                       cout << "exit field 2 -> 3" << endl;
                                       cout << "?:";
                                       cin >> secondrr;
                                       if(secondrr == "3"){
                                           pen1statee = false;
                                       }
                                       if(secondrr == "1"){
                                           for(size_t uuo=0; uuo < f2.size(); uuo++){
                                               cout << f2[uuo] << endl;
                                           }
                                       }
                                       if(secondrr == "2"){
                                           cout << "welcome to the buying menu ..." << endl;
                                           cout << "OPTIONS:" << endl;
                                           for(int zz = 0; zz < anPlantName.size(); zz++){
                                               cout << "item " << anPlantName[zz] << " cost R " << anPrice[(zz % 3)]  << " Option " << (zz + 1) << endl;
                                           }
                                           cout << "All items that are on your level shall be nearly double the amount paid" << endl;
                                           bool otherstatee = true;
                                           string substringe = "";
                                           while(otherstatee == true){
                                               cin.clear();
                                               cout << "if you would like to get out of this menu simply type exit" << endl;
                                               cout << "state the number which one?:";
                                               cin >> substringe;
                                               if (substringe == "exit"){
                                                   otherstatee = false;
                                               }
                                               if(pancap2 == cap1){
                                                   cout << "you can no longer add any more" << endl;
                                                   otherstatee = false;
                                               }
                                               if((substringe == "1")&& (pancap2 != cap1)){
                                                   f2.push_back(anPlant[0]);
                                                   pancap2 += 1;
                                               }
                                               else if((substringe == "2") && (pancap2 != cap1)){
                                                   f2.push_back(anPlant[1]);
                                                   pancap2 +=1;
                                               }
                                               else if((substringe == "3") && (pancap2 != cap1)){
                                                                             f2.push_back(anPlant[2]);
                                                   pancap2 +=1;
                                                                         }
                                               else if((substringe == "4") && (pancap2 != cap1)){
                                                                             f2.push_back(anPlant[3]);
                                                   pancap2 +=1;
                                                                         }
                                               else if((substringe == "5") && (pancap2 != cap1)){
                                                                             f2.push_back(anPlant[4]);
                                                   pancap2 +=1;
                                                                         }
                                               else if((substringe == "6") && (pancap2 != cap1)){
                                                                             f2.push_back(anPlant[5]);
                                                   pancap2 +=1;
                                                                         }
                                               else if((substringe == "7") && (pancap2 != cap1)){
                                                   f2.push_back(anPlant[6]);
                                                   pancap2 +=1;
                                                                         }
                                               else if((substringe == "8") && (pancap2 != cap1)){
                                                                             f2.push_back(anPlant[7]);
                                                                             pancap2 +=1;
                                                                                                   }
                                               else if((substringe == "9") && (pancap2 != cap1)){
                                                                             f2.push_back(anPlant[8]);
                                                                             pancap2 +=1;
                                                                                                   }
                                           else if((substringe == "10") && (pancap2 != cap1)){
                                                                         f2.push_back(anPlant[9]);
                                                                         pancap2 +=1;
                                                           }
                                           else if((substringe == "11") && (pancap2 != cap1)){
                                                                         f2.push_back(anPlant[10]);
                                                                         pancap2 +=1;
                                                                                               }
                                               else if((substringe == "12") && (pancap2 != cap1)){
                                                                             f2.push_back(anPlant[11]);
                                                                             pancap2 +=1;
                                                                                                   }
                                               else{
                                                   cout << "enter in valid input please" << endl;
                                               }
                                           }//end of while loop
                                        }
                                       }
                                   }// end of pen while loop
                             //goes through each of the items in the pen
                             //give option to sale
                             if(penreo == "3"){
                                   bool pen1statee = true;
                                     string secondrre;
                                   while(pen1statee == true){
                                 //give option to view
                                       cin.clear();
                                       cout  << "Field 3" << endl;
                                       cout << "view -> 1" << endl;
                                       cout << "buy -> 2" << endl;
                                       cout << "exit field 2 -> 3" << endl;
                                       cout << "?:";
                                       cin >> secondrre;
                                       if(secondrre == "3"){
                                           pen1statee = false;
                                       }
                                       if(secondrre == "1"){
                                           for(size_t uuo=0; uuo < f3.size(); uuo++){
                                               cout << f3[uuo] << endl;
                                           }
                                       }
                                       if(secondrre == "2"){
                                           cout << "welcome to the buying menu ..." << endl;
                                           cout << "OPTIONS:" << endl;
                                           for(int zz = 0; zz < anPlantName.size(); zz++){
                                               cout << "item " << anPlantName[zz] << " cost R " << anPrice[(zz % 3)]  << " Option " << (zz + 1) << endl;
                                           }
                                           cout << "All items that are on your level shall be nearly double the amount paid" << endl;
                                           bool otherstatee = true;
                                           string substringe = "";
                                           while(otherstatee == true){
                                               cin.clear();
                                               cout << "if you would like to get out of this menu simply type exit" << endl;
                                               cout << "state the number which one?:";
                                               cin >> substringe;
                                               if (substringe == "exit"){
                                                   otherstatee = false;
                                               }
                                               if(pancap3 == cap1){
                                                   cout << "you can no longer add any more" << endl;
                                                   otherstatee = false;
                                               }
                                               if((substringe == "1")&& (pancap3 != cap1)){
                                                   f3.push_back(anPlant[0]);
                                                   pancap3 += 1;
                                               }
                                               else if((substringe == "2") && (pancap3 != cap1)){
                                                   f3.push_back(anPlant[1]);
                                                   pancap3 +=1;
                                               }
                                               else if((substringe == "3") && (pancap3 != cap1)){
                                                                             f3.push_back(anPlant[2]);
                                                   pancap3 +=1;
                                                                         }
                                               else if((substringe == "4") && (pancap3 != cap1)){
                                                                             f3.push_back(anPlant[3]);
                                                   pancap3 +=1;
                                                                         }
                                               else if((substringe == "5") && (pancap3 != cap1)){
                                                                             f3.push_back(anPlant[4]);
                                                   pancap3 +=1;
                                                                         }
                                               else if((substringe == "6") && (pancap3 != cap1)){
                                                                             f3.push_back(anPlant[5]);
                                                   pancap3 +=1;
                                                                         }
                                               else if((substringe == "7") && (pancap3 != cap1)){
                                                   f3.push_back(anPlant[6]);
                                                   pancap3 +=1;
                                                                         }
                                               else if((substringe == "8") && (pancap3 != cap1)){
                                                                             f3.push_back(anPlant[7]);
                                                                             pancap3 +=1;
                                                                                                   }
                                               else if((substringe == "9") && (pancap3 != cap1)){
                                                                             f3.push_back(anPlant[8]);
                                                                             pancap3 +=1;
                                                                                                   }
                                           else if((substringe == "10") && (pancap3 != cap1)){
                                                                         f3.push_back(anPlant[9]);
                                                                         pancap3 +=1;
                                                           }
                                           else if((substringe == "11") && (pancap3 != cap1)){
                                                                         f3.push_back(anPlant[10]);
                                                                         pancap3 +=1;
                                                                                               }
                                               else if((substringe == "12") && (pancap3 != cap1)){
                                                                             f3.push_back(anPlant[11]);
                                                                             pancap3 +=1;
                                                                                                   }
                                               else{
                                                   cout << "enter in valid input please" << endl;
                                               }
                                           }//end of while loop
                                        }
                                   }// end of pen while loop
                                 
                             }// third field
                             if(penreo == "4"){
                                 
                                    bool pen1statee = true;
                                     string secondrr;
                                   while(pen1statee == true){
                                 //give option to view
                                       cin.clear();
                                       cout  << "Field 4" << endl;
                                       cout << "view -> 1" << endl;
                                       cout << "buy -> 2" << endl;
                                       cout << "exit field 2 -> 3" << endl;
                                       cout << "?:";
                                       cin >> secondrr;
                                       if(secondrr == "3"){
                                           pen1statee = false;
                                       }
                                       if(secondrr == "1"){
                                           for(size_t uuo=0; uuo < f4.size(); uuo++){
                                               cout << f4[uuo] << endl;
                                           }
                                       }
                                       if(secondrr == "2"){
                                           cout << "welcome to the buying menu ..." << endl;
                                           cout << "OPTIONS:" << endl;
                                           for(int zz = 0; zz < anPlantName.size(); zz++){
                                               cout << "item " << anPlantName[zz] << " cost R " << anPrice[(zz % 3)]  << " Option " << (zz + 1) << endl;
                                           }
                                           cout << "All items that are on your level shall be nearly double the amount paid" << endl;
                                           bool otherstatee = true;
                                           string substringe = "";
                                           while(otherstatee == true){
                                               cin.clear();
                                               cout << "if you would like to get out of this menu simply type exit" << endl;
                                               cout << "state the number which one?:";
                                               cin >> substringe;
                                               if (substringe == "exit"){
                                                   otherstatee = false;
                                               }
                                               if(pancap4 == cap1){
                                                   cout << "you can no longer add any more" << endl;
                                                   otherstatee = false;
                                               }
                                               if((substringe == "1")&& (pancap4 != cap1)){
                                                   f4.push_back(anPlant[0]);
                                                   pancap4 += 1;
                                               }
                                               else if((substringe == "2") && (pancap4 != cap1)){
                                                   f4.push_back(anPlant[1]);
                                                   pancap4 +=1;
                                               }
                                               else if((substringe == "3") && (pancap4 != cap1)){
                                                                             f4.push_back(anPlant[2]);
                                                   pancap4 +=1;
                                                                         }
                                               else if((substringe == "4") && (pancap4 != cap1)){
                                                                             f4.push_back(anPlant[3]);
                                                   pancap4 +=1;
                                                                         }
                                               else if((substringe == "5") && (pancap4 != cap1)){
                                                                             f4.push_back(anPlant[4]);
                                                   pancap4 +=1;
                                                                         }
                                               else if((substringe == "6") && (pancap4 != cap1)){
                                                                             f4.push_back(anPlant[5]);
                                                   pancap4 +=1;
                                                                         }
                                               else if((substringe == "7") && (pancap4 != cap1)){
                                                   f4.push_back(anPlant[6]);
                                                   pancap4 +=1;
                                                                         }
                                               else if((substringe == "8") && (pancap4 != cap1)){
                                                                             f4.push_back(anPlant[7]);
                                                                             pancap4 +=1;
                                                                                                   }
                                               else if((substringe == "9") && (pancap4 != cap1)){
                                                                             f4.push_back(anPlant[8]);
                                                                             pancap4 +=1;
                                                                                                   }
                                           else if((substringe == "10") && (pancap4 != cap1)){
                                                                         f4.push_back(anPlant[9]);
                                                                         pancap4 +=1;
                                                           }
                                           else if((substringe == "11") && (pancap4 != cap1)){
                                                                         f4.push_back(anPlant[10]);
                                                                         pancap4 +=1;
                                                                                               }
                                               else if((substringe == "12") && (pancap4 != cap1)){
                                                                             f4.push_back(anPlant[11]);
                                                                             pancap4 +=1;
                                                                                                   }
                                               else{
                                                   cout << "enter in valid input please" << endl;
                                               }
                                           }//end of while loop
                                        }
                                   }// end of pen while loop
                                 
                             }//fourth field
                        if(penreo == "5"){
                                penstatee = false;
                                cin.clear();
                                system(MC);
                                                 }
                         }
                         }// end of feild one
        if(mainre == "lab" || mainre =="Lab"){
            bool labstate = true;
            string labre="";
            while(labstate == true){
                system(MC);
                vector<string> uP ={"Artifical Selection and Selective selection LV2", "CRISPR CAS-1", "CRISPR CAS-9"};
                vector<int> coso = {10000,100000, 1000000};
                cout << "Welcome to the Lab you can get an upgrade here!" << endl;
                cout << "Here is a list of upgrades and the cost" << endl;
                cout << "Your understanding is at " << level << endl;
                cout << "Your money is at " << money << endl;
                cout << "Options in the Lab:" << endl;
                if(level != 4){
                cout << "(Buy) upgrade " << uP[(level -1)] << " for R " << coso[(level - 1)] << " -> Buy" << endl;
                }
                if(level >= 1){
                    cout << "view level 1 information -> 1" << endl;
                }
                if(level >= 2){
                    cout << "view level 2 information -> 2" << endl;
                }
                if(level >= 3){
                    cout << "view level 3 information -> 3" << endl;
                }
                cout << "Exit Lab -> exit" << endl;
                if((labre == "Exit" ) || (labre == "exit")){
                    labstate = false;
                }
                if((labre == "1") && (level >= 1)){
                        level1();
                }
                if((labre == "3") && (level >= 2)){
                        level2();
                              }
                if((labre == "3") && (level >= 3)){
                    level3();
                }
                if((labre == "4") && (level >= 4)){
                    level4();
                }
                if((labre == "modify") && (level >= 1)){
                    humanMod();
                              }
                if ((labre == "buy") || (labre =="Buy")){
                    if((level != 4) && (money >= coso[(level -1)])){
                        level += 1;
                        if(level == 2){
                            level2();
                            //exs += coso[(level -1)];
                            money -= expenses;
                        }
                        if(level == 3){
                            level3();
                            //exs += coso[(level -1)];
                            money -= expenses;
                        }
                        if(level == 4){
                            level4();
                            //exs += coso[(level -1)];
                            money -= expenses;
                        }
                    }
                    else{
                        cout <<" sorry you do not have enough money..." << endl;
                        entercon();
                        system(MC);
                    }
                }
            cin.clear();
            cout << "what option?:";
            cin >> labre;

                
            }
        }
    if((mainre == "sleep") || (mainre == "Sleep")){
        day = day + 1;
        acap1 =0;
        acap2 = 0;
        pancap1 =0;
        pancap2 = 0;
        //expenses -= exs;
        //section for the pens...
        if(day % 2 == 0){
        for(size_t i =0; i < p1.size(); i++){
            if(p1[i] == anLev[0]){
                money += 1750;
                money -= 500;
            }
            if(p1[i] == anLev[1]){
                money += 1500;
                money -= 300;
            }
            if(p1[i] == anLev[2]){
                money += 1750;
                money -= 400;
            }
            if(p1[i] == anLev[3] && (level == 2)){
                money += 2000;
                money -= 500;
            }
            if(p1[i] == anLev[4] && (level == 2)){
                money += 3200;
                money -= 300;
            }
            if((p1[i] == anLev[5]) && (level == 2)){
                money += 3000;
                money -= 400;
            }
            if((p1[i] == anLev[6]) && (level == 3)){
                money += 5000;
                money -= 500;
            }
            if((p1[i] == anLev[7])&& (level == 3)){
                money += 7500;
                money -= 300;
            }
            if((p1[i] == anLev[8]) && (level == 3)){
                money += 6000;
                money -= 400;
            }
            if((p1[i] == anLev[10]) && (level == 4)){
                money += 8000;
                money -= 500;
            }
            if((p1[i] == anLev[10]) && (level == 4)){
                money += 9000;
                money -= 300;
            }
            if((p1[i] == anLev[11]) &&(level == 4)){
                money += 10000;
                money -= 400;
            }
        }// end of for loop
            p1.clear();
        }// end of if loop
        if(day % 2 == 0){
        for(size_t j =0; j < p2.size(); j++){
            if(p2[j] == anLev[0]){
                money += 1750;
                money -= 500;
            }
            if(p2[j] == anLev[1]){
                money += 1500;
                money -= 300;
            }
            if(p2[j] == anLev[2]){
                money += 1750;
                money -= 400;
            }
            if(p2[j] == anLev[3] && (level == 2)){
                money += 2000;
                money -= 500;
            }
            if(p2[j] == anLev[4] && (level == 2)){
                money += 3200;
                money -= 300;
            }
            if((p2[j] ==anLev[5]) && (level == 2)){
                money += 3000;
                money -= 400;
            }
            if((p2[j] == anLev[6]) && (level == 3)){
                money += 5000;
                money -= 500;
            }
            if((p2[j] == anLev[7])&& (level == 3)){
                money += 7500;
                money -= 300;
            }
            if((p2[j] == anLev[8]) && (level == 3)){
                money += 6000;
                money -= 400;
            }
            if((p2[j] == anLev[10]) && (level == 4)){
                money += 8000;
                money -= 500;
            }
            if((p2[j] == anLev[10]) && (level == 4)){
                money += 9000;
                money -= 300;
            }
            if((p2[j] == anLev[11]) && (level == 4)){
                money += 10000;
                money -= 400;
            }
            
        }// end of for loop
            p2.clear();
        }// end of if loop
        //
        //
        //
        //
        //HERE SHALL BE THE PLANT AREAS
        if((day % 1) == 0){
            for(size_t c=0; c < f1.size(); c++){
                if(f1.size() >= 1){
                if ((f1[c] == anPlant[0]))
                {
                    money +=1000;
                    money -= 450;
                }
                }
                if (f2.size() >= 1){
                if((f2[c] == anPlant[0])){
                    money += 1000;
                    money -= 450;
                }
                }
                if(f3.size() >= 1){
                if((f3[c] == anPlant[0])){
                    money += 1000;
                    money -= 450;
                }
                }
                if(f4.size() >= 1){
                if((f4[c] == anPlant[0])){
                    money += 1000;
                    money -= 450;
                }
                }
                //second option
                const int t = 2;
                if(f1.size() >= t){
                if(f1[c] == anPlant[1]){
                    money +=600;
                    money -= 150;
                }
                }
                if(f2.size() >= t){
                if(f2[c] == anPlant[1]){
                    money +=600;
                    money -= 150;
                }
                }
                if(f3.size() >= t){
                if(f3[c] == anPlant[1]){
                    money +=600;
                    money -= 150;
                }
                }
                if(f4.size() >= t){
                if(f4[c] == anPlant[1]){
                    money +=600;
                    money -= 150;
                }
                }
                //third option
                const int three= 3;
                if(f1.size() >= three){
                if(f1[c] == anPlant[2]){
                    money += 800;
                    money -= 200;
                }
                }
                if(f2.size() >= three){
                if(f2[c] == anPlant[2]){
                    money += 800;
                    money -= 200;
                }
                }
                if(f3.size() >= three){
                if(f3[c] == anPlant[2]){
                    money += 800;
                    money -= 200;
                }
                }
                if(f4.size() >= three){
                if(f4[c] == anPlant[2]){
                    money += 800;
                    money -= 200;
                }
                }
                //fourth option lvl 2 needed
                const int four =4;
                if(f1.size() >= four){
                if((f1[c] == anPlant[3]) && (level == 2)){
                    money += 1200;
                    money -= 450;
                }
                }
                if(f2.size() >= four){
                if((f2[c] == anPlant[3]) && (level == 2)){
                    money += 1200;
                    money -= 450;
                }
                }
                if(f3.size() >= four){
                if((f3[c] == anPlant[3]) && (level == 2)){
                    money += 1200;
                    money -= 450;
                }
                }
                if(f4.size() >= four){
                if((f4[c] == anPlant[3]) && (level == 2)){
                    money += 1200;
                    money -= 450;
                }
                }
                //fifth option
                const int five = 5;
                if(f1.size() >= five){
                if((f1[c] == anPlant[4]) && (level == 2)){
                     money += 700;
                     money -= 150;
                 }
                }
                if(f2.size() >= five){
                 if((f2[c] == anPlant[4]) && (level == 2)){
                     money += 700;
                     money -= 150;
                 }
                }
                if(f3.size() >= five){
                 if((f3[c] == anPlant[4]) && (level == 2)){
                     money += 700;
                     money -= 150;
                 }
                }
                if(f4.size() >= five){
                 if((f4[c] == anPlant[4]) && (level == 2)){
                     money += 1200;
                     money -= 150;
                 }
                }
                //sixth option
                const int six = 6;
                if(f1.size() >= 6){
                if((f1[c] == anPlant[5]) && (level == 2)){
                     money += 900;
                     money -= 200;
                 }
                }
                if(f2.size() >= six){
                 if((f2[c] == anPlant[5]) && (level == 2)){
                     money += 900;
                     money -= 200;
                 }
                }
                if(f3.size() >= six){
                 if((f3[c] == anPlant[5]) && (level == 2)){
                     money += 900;
                     money -= 200;
                 }
                }
                if(f4.size() >= six){
                 if((f4[c] == anPlant[5]) && (level == 2)){
                     money += 900;
                     money -= 200;
                 }
                }
                //seventh option lvl 3
                const int nana = 7;
                if(f1.size() >= nana){
                if((f1[c] == anPlant[6]) && (level == 3)){
                     money += 1500;
                     money -= 450;
                 }
                }
                if(f2.size() >= nana){
                 if((f2[c] == anPlant[6]) && (level == 3)){
                     money += 1500;
                     money -= 450;
                 }
                }
                if(f3.size() >= nana){
                 if((f3[c] == anPlant[6]) && (level == 3)){
                     money += 1500;
                     money -= 450;
                 }
                }
                if(f4.size() >= nana){
                 if((f4[c] == anPlant[6]) && (level == 3)){
                     money += 1500;
                     money -= 450;
                 }
                }
                //eigth option
                const int eght = 8;
                 if(f1.size() >= eght){
                if((f1[c] == anPlant[7]) && (level == 3)){
                     money += 1100;
                     money -= 150;
                 }
                 }
                if(f2.size() >= eght){
                 if((f2[c] == anPlant[7]) && (level == 3)){
                     money += 1100;
                     money -= 150;
                 }
                }
                if(f3.size() >= eght){
                 if((f3[c] == anPlant[7]) && (level == 3)){
                     money += 1100;
                     money -= 150;
                 }
                }
                if(f4.size() >= eght){
                 if((f4[c] == anPlant[7]) && (level == 3)){
                     money += 1100;
                     money -= 150;
                 }
                }
                //ninth option
                const int nin = 9;
                if(f1.size() >= nin){
                if((f1[c] == anPlant[8]) && (level == 3)){
                     money += 1200;
                     money -= 200;
                 }
                }
                if(f2.size() >= nin){
                 if((f2[c] == anPlant[8]) && (level == 3)){
                     money += 1200;
                     money -= 200;
                 }
                }
                if(f3.size() >= nin){
                 if((f3[c] == anPlant[8]) && (level == 3)){
                     money += 1200;
                     money -= 200;
                 }
                }
                if(f4.size() >= nin){
                 if((f4[c] == anPlant[8]) && (level == 3)){
                     money += 1200;
                     money -= 200;
                 }
                }
                //tenth option lvl 4 needed
                const int en = 10;
                if(f1.size() >= en){
                if((f1[c] == anPlant[9]) && (level == 4)){
                     money += 3000;
                     money -= 450;
                 }
                }
                if(f2.size() >= en){
                 if((f2[c] == anPlant[9]) && (level == 4)){
                     money += 3000;
                     money -= 450;
                 }
                }
                if(f3.size() >= en){
                 if((f3[c] == anPlant[9]) && (level == 4)){
                     money += 3000;
                     money -= 450;
                 }
                }
                if(f4.size() >= en){
                 if((f4[c] == anPlant[9]) && (level == 4)){
                     money += 3000;
                     money -= 450;
                 }
                }
                //eleventh option
                const int Nein =11;
                if(f1.size() >= Nein){
                if((f1[c] == anPlant[10]) && (level == 4)){
                     money += 1300;
                     money -= 150;
                 }
                }
                 if(f2.size() >= Nein){
                 if((f2[c] == anPlant[10]) && (level == 4)){
                     money += 1300;
                     money -= 150;
                 }
                 }
                 if(f3.size() >= Nein){
                 if((f3[c] == anPlant[10]) && (level == 4)){
                     money += 1300;
                     money -= 150;
                 }
                 }
                 if(f4.size() >= Nein){
                 if((f4[c] == anPlant[10]) && (level == 4)){
                     money += 1300;
                     money -= 150;
                 }
                 }
                //twelth option
                const int twel = 12;
                 if(f1.size() >= twel){
                if((f1[c] == anPlant[11]) && (level == 4)){
                     money += 2700;
                     money -= 200;
                 }
                 }
                 if(f2.size() >= twel){
                 if((f2[c] == anPlant[11]) && (level == 4)){
                     money += 2700;
                     money -= 200;
                 }
                 }
                 if(f3.size() >= twel){
                 if((f3[c] == anPlant[11]) && (level == 4)){
                     money += 2700;
                     money -= 200;
                 }
                 }
                 if(f4.size() >= twel){
                 if((f4[c] == anPlant[11]) && (level == 4)){
                     money += 2700;
                     money -= 200;
                 }
                 }
            }
            f1.clear();
            f2.clear();
            f3.clear();
            f4.clear();
        }
    }
    }
//end of while  for main game!!!loop
}// correction!

int mainmenu(){
    string response;
    bool stateMenu = true;
    int x=-1;
    string name="Fred";
    do{
    system(MC);
    cout <<  "####  #### ####  ###    #  ##    ##" << endl;
    cout <<  "## ## # ## #     # ##   #   #    # " << endl;
    cout <<  "##  ##  ## ###   #  ##  #   #    # " << endl;
    cout <<  "##  ##  ## #     #   ## #   #    # " << endl;
    cout <<  "##      ## ####  #    ###    ####  " << endl;
        cout <<"Genetic Farming Emulation game" << endl;
    cout << "Options" << endl;
    cout << "New Game" << endl;
    cout << "Quick play -> Load" << endl;
    cout << "Credits" << endl;
    cout << "Quit" << endl;
    cout << "what option?";
        getline(cin, response);
        if((response == "New game") || (response =="new game")){
            x = 1;
            stateMenu = false;
        }
        else if((response == "Load") || (response == "load")){
            x = 2;
            stateMenu = false;
        }
        else if(response == "Credits" || response == "credits"){
            credits();
            x = 3;
        }
        else if((response == "Quit") || (response == "quit")){
            stateMenu = false;
        }
        else{
            cout << "Enter valid statement" << endl;
            entercon();
        }
    cin.clear();
    }while(stateMenu == true);
    system(MC);
    return x;
}
//
//
//
//
string getName(string& n1){
    cin.clear();
    bool yea = true;
    bool Ministate = false;
    string es;
    string othername = n1;
    while(yea == true){
        cout << "your current name is " << othername << endl;
        cout << "would you like to change it?" << endl;
        cout << "(yes/no)";
        getline(cin, es);
        if((es == "yes") || (es == "Yes")){
            yea = false;
            Ministate = true;
            cin.clear();
        }
        else{
            yea = false;
            Ministate = false;
        }
    }
    while(Ministate == true){
        cout << "what would you like the name to be?: ";
        cin >> othername;
        if (othername != n1){
            n1 = othername;
            return n1;
        }
    }
    return n1;
}
//
//
//
//
//
//
//
void tot(){
    string re;
    system(MC);
    cout << "Welcome to the world of GM farming I am your rich uncle Ren" << endl;
    cout << "I know that college was a breeze for you however sometimes" << endl;
    cout << "A little refresher on the way things work on the farm would be nice right?" << endl;
    cout << "Ren looks at you with happy eyes longing to explain" << endl;
    cout << "Do you reply with a yes or no?" << endl;
    cin >> re;
    if ((re == "No") || (re == "no")){
        cout << "Ren frowns well I am going to tell you anyways" << endl;
        cout  << "If I am going to give you some money..." << endl;
    }
    else{
        cout << "Ren simply nods and gives you an even brighter grin" << endl;
    }
    
    cin.clear();
    cin.ignore();
    entercon();
    cout << "Here is where our story starts with the first humans" << endl;
    cout << "Artifical selection or selective breeding was first used on animals" << endl;
    cout << "many thosands of years ago, people relized that certain traits" << endl;
    cout << "Could be reflected in the next generation through breeding certain animals[1]" << endl;
    cout << "In fact farmers still do use this method on many animals" << endl;
    cout << "it sometimes imrpoves milk and meat yeilds[2]" << endl;
    cout << "Simlarly plants have many possible ways to be modified but for my pocket change" << endl;
    cout << "you will be using one method known as selective selection for plants starting off" << endl;
    entercon();
    cout << "_____________________________________________________________________________"<< endl;
    cout << "Refrences" << endl;
    cout << "[1] Safety of genetically engineered foods: approaches to assessing unintended"<< endl;
    cout << "    health effects. Washington, DC, di: National Academies Press, 2004. " << endl;
    cout << "[2] M. B. Wheeler , “Transgenic Animals in Agriculture,” Nature News, 2013. [Online]." << endl << "Available: https://www.nature.com/scitable/knowledge/library/transgenic-animals-in-agriculture-105646080/." << endl << "[Accessed: 27-Nov-2020]. " << endl;
    entercon();
    system(MC);
    cout << "Now how to how to work a GMO farm right?"<< endl;
    cout <<" first off the stage will look like this" << endl;
    cout << "________________________________________________"<< endl;
    cout << "######  ###  #####  ###  ### " << endl;
    cout << "#      ## ## #   ## ## ## ## " << endl;
    cout << "###    ##### #####  ## ## ## " << endl;
    cout << "#      ## ## #   ## ## ## ## " << endl;
    cout << " " << endl;
    cout << "Day 0" << endl;
    cout << "{feild1}{feild2}{feild3}{feild4}" <<  endl;
    cout << "{pen1}{pen2}" << endl;
    cout << "Money R 500, 000 level over 9000" << endl;
    cout << "Options:" << endl;
    cout << "Animal Pens" << endl;
    cout << "Plants" << endl;
    cout << "Sleep" << endl;
    cout << "Lab" << endl;
    cout << "Exit to main menu ->(Exit)" << endl;
    cout << "________________________________________________" << endl;
    entercon();
    system(MC);
    cout << "The sleep option is the most important part because it helps you move" << endl;
    cout << "to the next day" << endl;
    cout << "Crops are harvested everyday and Animals are harvested every 2 days" << endl;
    cout << "The money will go directly into your acount as animals, and plants are sold" << endl;
    cout << "Do not wory much about the animals or plants becuase nothing is done to harm them" << endl;
    cout << "The main goal of the game is to get to 10 millon R" << endl;
    cout << "just as profit expenses are taken out every day at the end" << endl;
    cout << "You may continue to Farm to your desire once you reach this point" << endl;
    cout << "Since time is limted I will give you only 100 days to complete this task!" << endl;
    cout << "If you do not have the money by this time it will be game over!" << endl;
    entercon();
    system(MC);
     cout << "You will have these options: Plants, Animals Pens, Sleep, Lab and Exit" << endl;
    cout << "Plants option will give you a menu like this" << endl;
    cout << "Enter feild name f1, f2, f3 or f4" << endl;
    cout << "________________________________________________" << endl;
    cout << "So I enter f1 for the first field" << endl;
    cout << "view field" << endl;
    cout << "Which seed?" << endl;
    cout << "note this is a simplifed menu" << endl;
    cout << "there will be all the seeds avaible if you plant them without" << endl;
    cout << "the right experince you will lose money as a heads up" << endl;
    cout << "so know what you are doing!!" << endl;
    cout << "all plants sold make about two times the amount that it costs" << endl;
    cout << "enter W for Wheat lv1 expenses 200R" << endl;
    cout << "enter O for Oat lv1 expenses 300R " << endl;
    cout << "enter C for Corn Lv1 expenses 100R " << endl;
    cout << "I decided to do w for wheat and I will plant" << endl;
    cout << "it will prompt" << endl;
    cout << "how many?" << endl;
    cout << "I enter 4" << endl;
     cout << "you can enter an amount in between 1-4" << endl;
    cout << "it then "<< endl;
    cout << "prompts are you sure (yes/no)?" << endl;
    cout << "I enter yes" << endl;
    cout << "I can now view the wheat in the feild by taking the action" << endl;
    cout << "now it wil return me to that menu that I was before and I can view the field" << endl;
    cout << "note actions are FINAL!!!" << endl;
    entercon();
    system("clear");
    cout << "The next is the animal pens" << endl;
    cout << "When I do this option I will get two options" << endl;
    cout << "view pen" << endl;
    cout << "buy animals" << endl;
    cout << "sadly because there is no room on your farm to breed animals" << endl;
    cout << "you cannot do that however you can still profit from raising animals" << endl;
    cout << "once again you will have four animals in each stall" << endl;
    cout << "however expenses will vary" << endl;
    cout << "it is pretty much the same process as the plants" << endl;
    cout << "since I showed you the process once I do not need to again" << endl;
    entercon();
    system(MC);
    cout << "The next option is the Lab the funnest part in the game" << endl;
    cout << "from here you are able to upgrade all of your things" << endl;
    cout << "each upgrade is really costly just as a heads up" << endl;
    entercon();
    system(MC);
    cout << "the last option is the exit option" << endl;
    cout << "note nothing will be saved due to the fact that this game is only the trail version!" << endl;
    entercon();
    system(MC);
    
    //this gtes into the get name function and sets infomation up for the fun of things
    cout << "sadlly because of busy my life I have not been able to rember your name cuz" << endl;
    cout << "However I will give you 10, 000 R to help you start on your dream" << endl;
    cout  << "Good Luck..." << endl;
    entercon();
    system(MC);
}
void level1(){
    system(MC);
    cout << "The first humans used the process of ";
     cout << "Artifical selection or selective breeding on animals" << endl;
     cout << "many thosands of years ago, people relized that certain traits" << endl;
     cout << "Could be reflected in the next generation through breeding certain animals[1]" << endl;
     cout << "In fact farmers still do use this method on many animals" << endl;
     cout << "it sometimes imrpoves milk, and meat yeilds[2]" << endl;
     cout << "Simlarly plants have many possible ways to be modified but for time sake" << endl;
     cout << "The first method is known as selective selection for plants" << endl;
    cout << "This method is alike in the fact that plants are breeded" << endl;
    cout << "For a desired trai[1] " << endl;
     entercon();
     cout << "_____________________________________________________________________________"<< endl;
     cout << "Refrences" << endl;
     cout << "[1] Safety of genetically engineered foods: approaches to assessing unintended"<< endl;
     cout << "    health effects. Washington, DC, di: National Academies Press, 2004. " << endl;
     cout << "[2] M. B. Wheeler , “Transgenic Animals in Agriculture,” Nature News, 2013. [Online]." << endl << "Available: https://www.nature.com/scitable/knowledge/library/transgenic-animals-in-agriculture-105646080/." << endl << "[Accessed: 27-Nov-2020]. " << endl;
     entercon();
     system(MC);
}
void level2(){
    system(MC);
    cout << "!!Level 2 achived!!" << endl;
    cout <<"Upon recalling the first methods you remeber and actually use " << endl;
    cout <<"NATURAL SELECTION and SELECTIVE SELECTION " << endl;
    cout << "recall natural selection otherwise known as artifical selection is the process of" << endl;
    cout << "breeding animals with desired traits to get desired traits[1] " << endl;
    cout << "recall also that selective selection is the almost same process aside from being a method" <<endl;
    cout <<" where plants are breed[1]" << endl;
    cout << "You now can grow wheat Lv2, Oat Lv2, and Corn Lv2" <<endl;
    cout << "along with swine lvl2, cow lvl2, and goat lv2" << endl;
    entercon();
    cout << "_____________________________________________________________________________"<< endl;
    cout << "Refrences" << endl;
    cout << "[1] Safety of genetically engineered foods: approaches to assessing unintended"<< endl;
    cout << "    health effects. Washington, DC, di: National Academies Press, 2004. " << endl;
    entercon();
    system(MC);
}
void level3(){
    system(MC);
    cout << "!!!Level 3 reached!!!" << endl;
    cout << "Upon CRISPR's Discovery in 1993 by Francisco Mojica[3] "<< endl;
    cout << "the process was not discovered as a method for modifying DNA" <<endl;
    cout << "CRISPR Cas-1 protiens were first used and discovered" << endl;
    cout << "CRISPR stands for Clustered Regularly Interspaced Palindromic Repeats[5]" << endl;
    cout << "How the method works is like sort of like scissors cutting the old DNA inserting " << endl;
    cout << "The RNA strand for a desired trait" << endl;
    cout << "you now can grow items up to level 3 " << endl;
    entercon();
    cout << "_____________________________________________________________________________"<< endl;
    cout << "Refrences" << endl;
    cout << "[3] “CRISPR Timeline,” Broad Institute, 07-Dec-2018. [Online]. Available:" << endl;
    cout << "https://www.broadinstitute.org/what-broad/areas-focus/project-spotlight/crispr-timeline. [Accessed: 29-Nov-2020]. " << endl;
    cout << " [4] P. H. says: A. K. S. H. I. T. A. says: S. M. says: R. hebel says: R. S. says: J. Says: J. says: B. says: L. J. F. says: F." << endl;
    cout << " says: D. S. says: J. A. says: J. says: S. Says: T. ss says: L. S. says: T. P. says: J. F. G. Says: D. W. says: S. I. T. N. F. says:M. 9, S. I. T. N. F. says: F. F. says: S. says: S. S. N. says: W. P." << endl;
    cout << " says: P. says: J. says: E. T. says: S. I. T. N. F. says:A. 13, N. S. says: S. I. T. N. F. says:N. 6, D. K. Says: J. Says: B. H. says:" << endl;
    cout << "M. T. says: J. F. says: S. I. T. N. F. says:F. 22, E. D. Says: S. I. T. N. F. says:F. 25, B. E. T. T. Y. L. A. W. H. I. T. E. says: S. I. T. N. F."  << endl;
cout << "says:F. 6, L. says: S. I. T. N. F. says:M." << endl << " 19, J. M. says: A. says: K. says: C. C. M. says: I. "<< endl; \
    cout << "spectator says: S. I. T. N. F. says:S. 1, C. M. A. J. says: L. B. says: S. says: N. T. says: K. S. B. says: L. says: J. M." << endl;
    cout << "says: M. R. says: P. S. says: K. E. W. says: V. D. says: C. M. says: R. T. says: J. Says: M. says: L. Says: J. Says: B. says: M. E. L. I. N. D. A. G. R. E. E. N. says: T. Judd," << endl;
    cout << " J. says: M. M. says: V. says: M. v H. says: S. H. says: G. E. says: C. C. T. A. H. says: K. M. I. says: B. says: A. A. says:" << endl;
    cout << "and N. *, “CRISPR: A game-changing genetic engineering technique,” Science in the News, 31-Jul-2014. [Online]. Available:" << endl;
    cout << " http://sitn.hms.harvard.edu/flash/2014/crispr-a-game-changing-genetic-engineering-technique/. [Accessed: 05-Nov-2020]." << endl;
    entercon();
    system(MC);
}
void level4(){
    system(MC);
    cout << "Level 4 reached the last level possible for the game!" << endl;
    cout << "CRISPR methods have since improved since the improved use of Cas-9 since 2010[3] " << endl;
    cout << "CRISPR has had several benfits over the course of its life" << endl;
    cout << "CRISPR has been used to make: " << endl;
    cout << "Medications, Fuels and new materials[5]" << endl;
    cout << "CRISPR has been a interst of the industry because of its cheapness" << endl;
    cout << "and its capabilitys" << endl;
    cout << "However CRISPR is not the only method out there " << endl;
    cout << "and many methods are being devopled that will be key to technological advancement" << endl;
    cout << "Since you have  reached this level you can now use all products" << endl;
    cout << "addtionally you can use this keyword in the lab: modify human" << endl;
    cout << "However it is not advised!" << endl;
    entercon();
    cout << "_____________________________________________________________________________"<< endl;
    cout << "Refrences" << endl;
    cout << "[3] “CRISPR Timeline,” Broad Institute, 07-Dec-2018. [Online]. Available:" << endl;
    cout << "https://www.broadinstitute.org/what-broad/areas-focus/project-spotlight/crispr-timeline. [Accessed: 29-Nov-2020]. " << endl;
    cout << "[5] P. D. Hsu, E. S. Lander, and F. Zhang, “Development and Applications of CRISPR-Cas9 for Genome Engineering,” Cell, vol. 157," << endl;
    cout << "no. 6, pp. 1262–1278. , Jun. 2014. "  << endl;
    entercon();
    system(MC);
    
}
void humanMod(){
    system(MC);
    cout << "Human modifaction is strictly prohibited" << endl;
    cout  << "Though this has happened before there are several ethical issues that arise from this" << endl;
    cout << "CRISPR is still not capable enough to modify the human without unknown side effects[]" << endl;
    cout << "This has happend only a few times in history[] " << endl;
    cout << "The result of this action sent the He jenk into prison[]" << endl;
    cout << "becuase of this action" << endl;
    cout << "You too have been sent to prison and because of the exsesive fees" << endl;
    cout <<" This is game over!" << endl;
    entercon();
    cout << "just kidding..." << endl;
    cout << "but please do not copy this action since it is illegal" << endl;
    cout << "_____________________________________________________________________________"<< endl;
    cout << "Refrences" << endl;
    cout << "[6] “China jails 'gene-edited babies' scientist for three years,” BBC News, 30-Dec-2019. [Online]. Available: https://www.bbc.com/news/world-asia-china-50944461. [Accessed: 16-Oct-2020]." << endl;
    cout << "[7] S. Krimsky, “Ten ways in which He Jiankui violated ethics,” Nature Biotechnology,"<< endl;
    cout << "vol. 37, no. 1, pp. 19–20, Jan. 2019." << endl;
    cout << "[8] H. Jiankui , “evaluation of HIV immune gene CCR5 gene editing in human embryos ,”"<< endl;
    cout << "Chinese Clinical Trial Register (ChiCTR) - The world health organization international clinical trials registered organization " << endl;
    cout << "registered platform, 30-Nov-2018. [Online]. Available: http://www.chictr.org.cn/showprojen.aspx?proj=32758. [Accessed: 16-Oct-2020]." << endl;
    
}
void gameOver(){
    system(MC);
    cout << "You have achived a new low" << endl;
    cout << "game over" << endl;
    cout << "now exiting to main menu" << endl;
    entercon();
    mainmenu();
}
void credits(){
    system(MC);
    cout << "Made by:" << endl;
    cout << "Tyler Evans" <<endl;
    cout << "Special Thanks to " << endl;
    cout << "The Marriot Libary" << endl;
    cout << "at www.lib.utah.edu" << endl;
    cout << "Thanks to Profesor Jacob Yordy" << endl;
    cout << "For permiting such a project" << endl;
    entercon();
    system(MC);
    cout << "_____________________________________________________________________________"<< endl;
    cout << "Refrences" << endl;
    cout << "[1] Safety of genetically engineered foods: approaches to assessing unintended"<< endl;
    cout << "    health effects. Washington, DC, di: National Academies Press, 2004. " << endl;
    cout << "[2] M. B. Wheeler , “Transgenic Animals in Agriculture,” Nature News, 2013. [Online]." << endl << "Available: https://www.nature.com/scitable/knowledge/library/transgenic-animals-in-agriculture-105646080/." << endl << "[Accessed: 27-Nov-2020]. " << endl;
        cout << "[3] “CRISPR Timeline,” Broad Institute, 07-Dec-2018. [Online]. Available:" << endl;
        cout << "https://www.broadinstitute.org/what-broad/areas-focus/project-spotlight/crispr-timeline. [Accessed: 29-Nov-2020]. " << endl;
        cout << " [4] P. H. says: A. K. S. H. I. T. A. says: S. M. says: R. hebel says: R. S. says: J. Says: J. says: B. says: L. J. F. says: F." << endl;
        cout << " says: D. S. says: J. A. says: J. says: S. Says: T. ss says: L. S. says: T. P. says: J. F. G. Says: D. W. says: S. I. T. N. F. says:M. 9, S. I. T. N. F. says: F. F. says: S. says: S. S. N. says: W. P." << endl;
        cout << " says: P. says: J. says: E. T. says: S. I. T. N. F. says:A. 13, N. S. says: S. I. T. N. F. says:N. 6, D. K. Says: J. Says: B. H. says:" << endl;
        cout << "M. T. says: J. F. says: S. I. T. N. F. says:F. 22, E. D. Says: S. I. T. N. F. says:F. 25, B. E. T. T. Y. L. A. W. H. I. T. E. says: S. I. T. N. F."  << endl;
    cout << "says:F. 6, L. says: S. I. T. N. F. says:M." << endl << " 19, J. M. says: A. says: K. says: C. C. M. says: I. "<< endl; \
        cout << "spectator says: S. I. T. N. F. says:S. 1, C. M. A. J. says: L. B. says: S. says: N. T. says: K. S. B. says: L. says: J. M." << endl;
        cout << "says: M. R. says: P. S. says: K. E. W. says: V. D. says: C. M. says: R. T. says: J. Says: M. says: L. Says: J. Says: B. says: M. E. L. I. N. D. A. G. R. E. E. N. says: T. Judd," << endl;
        cout << " J. says: M. M. says: V. says: M. v H. says: S. H. says: G. E. says: C. C. T. A. H. says: K. M. I. says: B. says: A. A. says:" << endl;
        cout << "and N. *, “CRISPR: A game-changing genetic engineering technique,” Science in the News, 31-Jul-2014. [Online]. Available:" << endl;
        cout << " http://sitn.hms.harvard.edu/flash/2014/crispr-a-game-changing-genetic-engineering-technique/. [Accessed: 05-Nov-2020]." << endl;
        entercon();
        system(MC);
    cout << "_____________________________________________________________________________"<< endl;
    cout << "Refrences" << endl;
    cout << "[5] P. D. Hsu, E. S. Lander, and F. Zhang, “Development and Applications of CRISPR-Cas9 for Genome Engineering,” Cell, vol. 157," << endl;
    cout << "no. 6, pp. 1262–1278. , Jun. 2014. "  << endl;
    cout << "[6] “China jails 'gene-edited babies' scientist for three years,” BBC News, 30-Dec-2019. [Online]. Available: https://www.bbc.com/news/world-asia-china-50944461. [Accessed: 16-Oct-2020]." << endl;
       cout << "[7] S. Krimsky, “Ten ways in which He Jiankui violated ethics,” Nature Biotechnology,"<< endl;
       cout << "vol. 37, no. 1, pp. 19–20, Jan. 2019." << endl;
       cout << "[8] H. Jiankui , “evaluation of HIV immune gene CCR5 gene editing in human embryos ,”"<< endl;
       cout << "Chinese Clinical Trial Register (ChiCTR) - The world health organization international clinical trials registered organization " << endl;
       cout << "registered platform, 30-Nov-2018. [Online]. Available: http://www.chictr.org.cn/showprojen.aspx?proj=32758. [Accessed: 16-Oct-2020]." << endl;
    entercon();
    system(MC);
    mainmenu();
}
