#include <iostream>
using namespace std;

int getIntValue() {
    // Declare a variable var_int of type int and set its value to 10.
    int var_int = 10;
    return var_int;
}

float getFloatValue() {
    // Declare a variable var_float of type float and set its value to 10.75.
    float var_float = 10.75;
    return var_float;
}

char getCharValue() {
    // Declare a variable var_char of type character and set its value to 'A'.
    char var_char = 'A';
    return var_char;
}

int convertFloatToInt(float value) {
    // convert value to int.
    return static_cast<int>(value);  // use type casting to convert float to int
}

/*
Convert Fahrenheit to Celsius and store your answer in a variable celsius.

Formula:
    Celsius = (Fahrenheit - 32) * 5 / 9
*/
float fahrenheitToCelsius(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}

int main() {
    cout << "Integer value: " << getIntValue() << endl;
    cout << "Float value: " << getFloatValue() << endl;
    cout << "Char value: " << getCharValue() << endl;

    float myFloat = getFloatValue();
    cout << "Converted float to int: " << convertFloatToInt(myFloat) << endl;

    float tempF = 100; // Example Fahrenheit value
    cout << tempF << " Fahrenheit = " << fahrenheitToCelsius(tempF) << " Celsius" << endl;

    return 0;
}

