//
//  Controller.h
//  FirstProjectForCPlusPlus
//
//  Created by Trevino, Peyton on 1/23/17.
//  Copyright © 2017 Trevino, Peyton. All rights reserved.
//

#ifndef Controller_h
#define Controller_h

class Controller
{
private:
    void specialOutput();
    void diceOutput();
    void useNumbers(int someNumber);
    int impactNumber();
    void usePointerToChange(int * somePointer);
    
public:
    void start();
};
#endif /* Controller_h */
