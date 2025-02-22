#include <iostream>
int main(){

int students = 40;

students +=1;
students ++;
students -=1;

students -=2;
students --;

students = students * 2;
students *=2;

students /=20;

int remainder = students % 3;

std::cout << remainder << "\n";
std::cout << students;

return 0;
}
