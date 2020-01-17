using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;

public class NativeCppLibraryIntegration : MonoBehaviour
{

    // Import and expose native c++ functions

    [DllImport("NATIVECPPLIBRARY", EntryPoint = "displayNumber")]
    public static extern int displayNumber();

    [DllImport("NATIVECPPLIBRARY", EntryPoint = "getRandom")]
    public static extern int getRandom();

    [DllImport("NATIVECPPLIBRARY", EntryPoint = "displaySum")]
    public static extern int displaySum();

    // Start is called before the first frame update
    void Start()
    {
        // Display output of functions
        print(displayNumber());

        print(getRandom());

        print(displaySum());
        
    }


}
