#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //const int sides = 4;

    // Declare variable type for volume and sides
    float volume, sides;

    //Main display
    cout << "*********************************************\n";
    cout << "     Calculate the volume of a cube :\n";
    cout << "*********************************************\n";
    cout << " Input the side length of the cube (cm) :\n";

    //User input
    cin >> sides;

    //Formula for working out the are of a cube
    volume = pow(sides, 3);
    cout << " The volume of a cube is : " << volume << "cm" << endl;
    cout << endl;
    return 0;
}