#include <iostream>

using namespace std;

int main()
{
    //Prompt temp in C
    cout << "Please Enter the temperature in Celsius: " << endl;


    //Get temp
    float celsius;
    cin >> celsius;

    //Temp conversion
    float f = (celsius * 9.0f) / 5.0f + 32;

    //Display result
    cout << "The temperature is " << f << " Fahrenheit" << endl;
}