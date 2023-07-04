#include <iostream>
#include <cmath>
#include <string>
#include "Header.h"       // Header.h is the name of the header file and should be enclosed in double quotes
using namespace std;

int main()
{
    head();
    // US units
    string age;
    string gender;
    double height;
    double weight;
    int gym;
    double calorie;

    cout << "How old are you? ";
    cin >> age;
    cout << "What is your gender? Male Female Other ";
    cin >> gender;
    cout << "What is your height in inches? ";
    cin >> height;
    cout << "What is your weight? ";
    cin >> weight;
    cout << "What is your gym days per week? ";
    cin >> gym;

    if (gender == "male" || gender == "Male")
    {
        calorie = (10 * weight) + (6.25 * height) - (5 * stoi(age)) + 5;
    }
    else if (gender == "female" || gender == "Female")
    {
        calorie = (10 * weight) + (6.25 * height) - (5 * stoi(age)) - 161;
    }
    else (gender == "other" || gender == "Other");
    {
        // "other" gender will follow the same calculation as males
        
        calorie = (10 * weight) + (6.25 * height) - (5 * stoi(age)) + 5;
    }
    cout << "Your calorie intake should be around "; 
    cout << calorie;
   

    return 0;
}