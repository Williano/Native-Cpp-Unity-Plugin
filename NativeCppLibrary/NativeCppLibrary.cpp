// NativeCppLibrary.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "NativeCppLibrary.h"


// Standard Library imports
#include <iostream>


int displayNumber()
{
    return 1;
}

int getRandom()
{
    return rand();
}



int displaySum() {
    int first_number = 7;
    int second_number = 7;

    int total = first_number + second_number;

    return total;