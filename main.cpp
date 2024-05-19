#include <iostream>

int main()
{

   int age;


   std::cout << "Welcome to the site, Enter your age: ";
   std::cin >> age;

   if(age >= 22)
   {
      std::cout << "Access Granted" << '\n';
   }

   else if(age < 22)
   {
      std::cout << "You are not allowed to access this site" << '\n';
   }
   return 0;
}