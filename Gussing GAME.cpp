#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main()
{
    while(1)
    {
        int guessnumber,randomnumber;
        cout<<"Enter your guess Number: ";
        cin>>guessnumber;
        randomnumber=rand()%5+1;
        if(guessnumber==randomnumber)
        {
            cout<<"WOW!@ You Have Won"<<endl<<endl;
        }
        else
        {
            cout<<"You Have lost .try Again"<<" - ";
            cout<<"Rndom Number was:"<<randomnumber<<endl<<endl;
        }


    }
    getch();
}

