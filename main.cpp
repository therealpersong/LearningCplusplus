#include <iostream>
#include <ctime>
#include <cmath>

using std::string;
using std::cout;
using std::cin;

int main(){

    string name;
    bool gamerunning;
    char gamestart;
    int p_option;
    int health = 0;
    int attack = 0;
    int luck = 0;

    srand(time(0));
    int randNum = rand() % 100 + 1;

    cout << "Choose your perk\n";
    cout << "1. Warrior\n";
    cout << "2. Rogue\n";
    cout << "3. Mage\n";
    cout << "4. Ranger\n";
    cin >> p_option;

    switch(p_option){
        case 1:
        cout << "You are a warrior\n";
        cout << "Your stats are: " << '\n';
        cout << "You have 100 health\n";
        cout << "You have 10 attack\n";
        cout << "You have 10 luck\n";
        health + 100;
        attack + 10;
        luck + 10;
        break;
        case 2:
        cout << "You are a rogue\n";
        cout << "Your stats are: " << '\n';
        cout << "You have 50 health\n";
        cout << "You have 20 attack\n";
        cout << "You have 20 luck\n";
        health + 75;
        attack + 20;
        luck + 20;
        break;
        case 3:
        cout << "You are a mage\n";
        cout << "Your stats are: " << '\n';
        cout << "You have 50 health\n";
        cout << "You have 10 attack\n";
        cout << "You have 20 luck\n";
        health + 50;
        attack + 10;
        luck + 40;
        break;
        case 4:
        cout << "You are a ranger\n";
        cout << "Your stats are: " << '\n';
        cout << "You have 100 health\n";
        cout << "You have 10 attack\n";
        cout << "You have 20 luck\n";
        health + 250;
        attack + 5;
        luck + 10;
        default: std::cout << "only say a number between (1-4)";
    }
    
    if(p_option >= 1){
        cout << "Would you like to start the game Y/N?: ";
        cin >> gamestart;
        if (gamestart = 'Y' || 'y'){
            gamerunning == true;
            std::cout << "The game has now begun";
            while(gamerunning)
    {
        while(name.empty()){
        std::cout << "Enter your character's name: ";
    }

                                                                                                                
                                                                                                            
                                                                                                            
                                                                                                            
                                                                                                            
                                                                                                            
                                                                                                            
                                                                                                            
                                                                                                            
                                                                                                            
                                                                                                            
                                                                                                            }

        }
        else if(gamestart = 'N' || 'n'){
            cout << "Game has ended";
        }
        else
        {cout << "Enter only Y or N";}
    }


    
    return 0;
}
