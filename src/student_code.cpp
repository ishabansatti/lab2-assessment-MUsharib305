#include <iostream>
using namespace std;

int getIntValue() {
    int var_int = 10;
    return var_int;
}

float getFloatValue() {
    float var_float = 10.75;
    return var_float;
}

char getCharValue() {
    char var_char = 'A';
    return var_char;
}

int convertFloatToInt(float value) {
    return static_cast<int>(value);
}

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

    float tempF = 100;
    cout << tempF << " Fahrenheit = " << fahrenheitToCelsius(tempF) << " Celsius" << endl;

    return 0;
}
