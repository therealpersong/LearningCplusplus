#include <iostream>
#include <istream>
#include <string>


using std::cout;
using std::string;
using std::cin;


int main()
{

string name;

while(name.empty())
{
    cout << "Enter your name" << std::endl;
    std::getline(cin, name);
}

cout << "The name is " << name << '\n';
    return 0;
}