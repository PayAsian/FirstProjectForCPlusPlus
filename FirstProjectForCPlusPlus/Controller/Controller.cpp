//
//  Controller.cpp
//  FirstProjectForCPlusPlus
//
//  Created by Trevino, Peyton on 1/23/17.
//  Copyright © 2017 Trevino, Peyton. All rights reserved.
//

#include <iostream>
#include <random>
#include "Controller.h"

using namespace std;

void Controller :: start()
{
    //cout << "Words here please :D" << endl;
    //this->specialOutput();
    //this->diceOutput();
    
    
    int myNumber = 9;
    int * numberPointer = &myNumber;
    
    cout << myNumber << endl;
    useNumbers(myNumber);
    cout << myNumber << endl;
    
    cout << "Starting with: " << myNumber << endl;
    myNumber = impactNumber();
    cout << "See - impacted " << myNumber << endl;
    
    cout << "changing with a pointer" << endl;
    usePointerToChange(numberPointer);
    cout << "See how the nubmer has been changed: " << myNumber << endl;
    
}

void Controller :: specialOutput()
{
    cout << "Hi how old are you?" << endl;
    int age;
    cin >> age;
    cout << "you typed in " << age << endl;
    cout << "Type in your name :D" << endl;
    string name;
    cin >> name;
    cout << "your name is " << name << " WOW COOL - :P" << endl;
    cin.ignore();
    cout << "Type your name and age" << endl;
    cin >> name >> age;
    cout << "you typed " << name << " and " << age << endl;
    cout << "Type in your full name" << endl;
    cin.ignore();
    getline(cin, name);
    cout << name << endl;
}

void Controller :: diceOutput()
{
    std :: default_random_engine generator;
    std :: uniform_int_distribution<int> distribution(1,6);
    int diceRoll = distribution(generator);
    cout << diceRoll << endl;
    
    
    auto dice = std :: bind (distribution , generator);
    int wisdom = dice() + dice() + dice();
    cout << wisdom << endl;
    
    cout << wisdom + diceRoll << endl;
}

void Controller :: useNumbers(int suppliedNumber)
{
    cout << "I was given: " << suppliedNumber << endl;
    suppliedNumber = (suppliedNumber * 3 + 3242) / 42;
    cout << "It is now: " << suppliedNumber << endl;
    
}

int Controller :: impactNumber()
{
    return 165789;
}

void Controller :: usePointerToChange(int * pointedTo)
{
    *pointedTo = 2 * (1230985);
}
