#include<iostream>
#include<windows.h>
#include<cstdlib>
#include<ctime>
using namespace std;
string Version_Number="1.0.0";
int main()
{
    cout<<"WELCOME TO RANDOM PASSWORD GENERATOR\n";
    Sleep(500);
    cout<<Version_Number<<"\n";
    Sleep(500);
    cout<<"Developed by UDITANGSHU_DEY\n\n";
    Sleep(500);
    cout<<"It is a random 8 charecter password generator\n";
    Sleep(500);
    cout<<"This program will generate a password containing 1 special charecter,1 capital letter ,at least one number \n\n";
    Beep(900,200);//"\a"
    system("pause");
return 0;
}

