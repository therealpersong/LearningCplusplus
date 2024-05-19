#include <iostream>

int main()
{

   int age;


   std::cout << "Welcome to the site, Enter your age:";
   std::cin >> age;

   if(age >= 18)
   {
      std::cout << "Access Granted" << '\n';
   }
   return 0;
}