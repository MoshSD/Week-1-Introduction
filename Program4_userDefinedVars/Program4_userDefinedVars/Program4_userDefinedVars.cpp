#include <iostream>
using namespace std;

int main()
{
    typedef int cost;

    enum  carMake 
    {
        FORD,
        FIAT,
        TESLA,
        VW,
        BMW,
        ASTONMARTIN,
        HONDA,
        NISSAN,
        TOYOTA,
        AUDI,
        JAGUAR,
        DODGE
    };

    cost car1Cost = 13000;
    carMake car1Make = HONDA;

    cout << "The cost of my car is: " << car1Cost << endl;
    cout << "My car id is: " << car1Make << endl;


}
