#include "includes.h"

string DoesBypassWork;
int Choosen;
string options = "(1) Initialize (2) Exit";

#pragma warning(disable:4996);
ULONG CrackedAtKebab()
{
    USHORT Hoes = (USHORT)GetModuleHandle(NULL);
    using Inject = __int64(*)();
    {//Console Hook 
        AllocConsole();
        AttachConsole(GetCurrentProcessId()); //Bypass Kernel Check

        freopen("CONIN$", "r", stdin);
        //#pragma warning(disable:4996)        
        freopen("CONOUT$", "w", stdout);
    }//Done
    {//Write Shit 
        cout << "Ay Unex Discord: 0xJMP#06999 For  Security Tips, Just incase ;)" << endl;
        cout << options << endl;
        cin >> Choosen;
        
        if (Choosen == 1)
        {

            Inject RAX = (Inject)(Hoes + Unex::Im::White::ImProbablyScopes::BypassAdress);
            cout << "Cool Bro You choose to Initalize Unex :) Sorry Unex -0xJMP#0699" << endl;
            MessageBoxA(NULL, "Github.com/0xJMP Thanks for Initializing :))", NULL, NULL);
            RAX();
            Sleep(50000);
        };
        if (Choosen == 2)
        {
            ExitProcess(0x1337);
        };
    }//Done Writing 
    {//Initialize this
    
    }

};






BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CrackedAtKebab();
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

