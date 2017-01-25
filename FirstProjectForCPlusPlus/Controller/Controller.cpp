//
//  Controller.cpp
//  FirstProjectForCPlusPlus
//
//  Created by Trevino, Peyton on 1/23/17.
//  Copyright © 2017 Trevino, Peyton. All rights reserved.
//

#include <iostream>
#include "Controller.h"

using namespace std;

void Controller :: start()
{
    cout << "words here please :D" << endl;
    this->specialOutput();
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
    cin >> name;
    cout << name;
    cout << "Type your name and age" << endl;
    cin >> name >> age;
    cout << "you typed " << name << " and " << age << endl;
    cout << "Type in your full name" << endl;
    cin.ignore();
    getline(cin, name);
    cout << name << endl;
    
}
