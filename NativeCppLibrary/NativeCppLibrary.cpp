// NativeCppLibrary.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "NativeCppLibrary.h"


// This is an example of an exported variable
NATIVECPPLIBRARY_API int nNativeCppLibrary=0;

// This is an example of an exported function.
NATIVECPPLIBRARY_API int fnNativeCppLibrary(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CNativeCppLibrary::CNativeCppLibrary()
{
    return;
}
