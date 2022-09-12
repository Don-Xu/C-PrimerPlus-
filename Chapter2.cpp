//
// Created by 69037 on 2022/9/12.
//

#include "Chapter2.h"
#include <iostream>

using namespace std;

void name_and_address();//1
void convert_distance();//2
void first();//3
void second();//3
void ages_to_months();//4
void exercise5();
void exercise6();
void exercise7();
int main(){
//    name_and_address();
//    convert_distance();
//    ages_to_months();
    exercise7();
    return 1;
}
void name_and_address(){
    cout << "Don";
    cout << " USTC" << endl;
}
void convert_distance(){
    double l0ng;
    cin >> l0ng;
    cout << l0ng << " long = " << l0ng * 220 << "yard " << endl;
}
void first(){
   cout << "Three blind mice" << endl;
}
void second(){
    cout << "See how they run" << endl;
}
void ages_to_months(){
    int age;
    cin >> age;
    cout << "you have lived for " << age * 12 << " months" << endl;
}
void exercise5(){
    cout << "Please enter a Celsius value:";
    double degree;
    cin >> degree;
    cout << degree << " degrees Celsius is "<< 1.8 * degree + 32<< " degree Fahrenheit."<< endl;
}
void exercise6(){
    cout << "Enter the number of light years : ";
    double num;
    cin >> num;
    cout << num << " light years = ";
    cout << 63240 * num << " astronomical units";
}
void exercise7(){
    int hours, minutes;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    cout << "Time: " << hours << ":" << minutes << endl;
}