#include <stdio.h>
#include <windows.h>
#include <string>
#include <ctime>
#include <time.h>
#include <conio.h>
using namespace std;
void lose()
{
    string str = "Your type has been extincted!!";
    for (int i=0; i<30 ; i++)
    {
        Sleep(200);
        printf ("%c",str[i]);
    }
    Sleep(200);
    for (int i=1; i<=10; i++)
    {
        system ("Color 40");
        Sleep(200);
        system ("Color 07");
        Sleep(200);
    }
    system ("Color 07");
    system ("cls");
    exit (0);
}

void win(char savior, char user_type)
{
    string str = "Type";
    for (int i=0; i<4 ; i++)
    {
        Sleep (200);
        printf ("%c",str[i]);
    }
    Sleep (300);
    printf (" %c ",savior);
    string str1 = "survived!!";
    for (int i=0; i<10 ; i++)
    {
        Sleep(150);
        printf ("%c",str1[i]);
    }
    for (int i=1; i<=10; i++)
    {
        system ("Color 07");
        Sleep(200);
        system ("Color 70");
        Sleep(200);
    }
    system ("Color 07");
    system ("cls");
    Sleep(1000);
    if (user_type == savior)
    {
        string str2 = "Congratulations! Your actions towards saving your species across the apocalypse have been successful! Your kind will now live in peace and serenity.";
        for (int i=0; i<148 ; i++)
        {
            if (i>=0 && i<=15) system ("Color 5E");
            printf ("%c",str2[i]);
            Sleep(120);
        } exit(0);
    }
    else if (user_type != savior) lose();
    exit (0);
}
int main()
{
    char winner;
    char user;
    scanf ("%c %c",&winner,&user);
    system ("cls");
    win(winner,user);
    return 0;
}
