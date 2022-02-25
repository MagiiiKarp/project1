#include <iostream>

// Declaration of function - describes the function
int CubeNumber(int num); 

int main()
{
    //user input
    int num;

    std::cout << "Enter number \n";
    std::cin >> num;

    /* Cube calculation. */
    int cube = CubeNumber(num);
 
    //print out result.
    std::cout << "Cube of the number is \n" << cube;

    return 0;
}

// Definition of a function - Defines the logic
int CubeNumber(int num)
{
    int cube = num * num * num;
    return cube;
}