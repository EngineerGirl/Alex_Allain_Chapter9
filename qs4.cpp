/*
 ==============================================================================================================================
 Name        : qs4.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright (c) Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright (c) Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Make a "slot machine" game that randomly displays the results of a slot machine to a player—have 3
               (or more) possible values for each wheel of the slot machine. Don't worry about displaying the text
               "spinning" by. Just choose the results and display them and print out the winnings (choose your own
               winning combinations).
 ==============================================================================================================================
 */
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
srand (time(NULL));
int a, first, second, third, times=0;
  while (times < 25)
  {
    for(int spin= 0; spin<3; spin++)
    {
      a = ((rand()%2)+1);
      cout<< a<<"   ";
        if (spin==0)
        {
          	first=a;
        }
        if(spin==1)
        {
          	second=a;
        }
        if(spin==2)
        {
          	third=a;
        }
      }
    if (first==1 && second==2 && third==1) // winning combination
      cout<< "JACKPOT!!" <<endl;
    else cout << "Blame your fate!!"<< endl;
  times++;
  }
system ("pause");
return 0;
}
