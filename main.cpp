#include <iostream>
#include <cmath>

int main(){

    int age;

    std::cout << "ENTER YOUR AGE: ";
    std::cin >> age;

    if(age >= 100){
        std::cout << "You are too old to enter this site";
    }

    else if(age >= 18){
        std::cout << "Welcome to da site!";
    }

    else if(age < 0){
        std::cout << "You haven't even been born yet";
    }

    else{
        std::cout << "You are not old enough to enter";
    }

    return 0;
}
