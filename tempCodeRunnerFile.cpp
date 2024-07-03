#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

namespace first{
    double Side_A = 53;
    double Side_B = 62;
}

namespace second{
    double Side_A = 83;
    double Side_B = 21;
}

int main()
{

    double Side_A;
    double Side_B;
    double result;

    //cout << "Enter side A: ";
    //cin >> Side_A;

    //cout << "Enter side B: ";
    //cin >> Side_B;

    result = sqrt(pow (first::Side_A, 2) + pow(first::Side_B, 2));
    cout << "The hypotenuse is: " << result;

    return 0;
}