#include <iostream>
#include "cmath"

using namespace std;

int main(void ){
    double area;
    cout << "enter the floor area, in sqare feet, of your home: ";

    cin >> area;

    double side;
    side = sqrt(area);
    cout << "that is the equivalent of q square "
         << " feet to the side." << endl;

    cout << side;
    cout << "how fascinationg!" << endl;

    return 0;

}