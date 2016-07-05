/*
 ==============================================================================================================================
 Name        : qs2.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright (c) Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright (c) Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Write a program that picks a number between 1 and 100, and then lets the user guess what the
               number is. The program should tell the user if their guess is too high, too low, or just right.
 ==============================================================================================================================
 */
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
srand(time(NULL));

int number = (rand()%101);
cout<< number<<endl;
int i=0;
	while (1)
	{
		int guess;
		cin>>guess;
		if ( number == guess) cout<<"Great job!! YOU WON 25 cents"<< endl;
		else if (guess>number) cout<< "Way high"<<endl;
		else if (guess<number) cout<< "Way low"<<endl;
	}
system ("pause");
return 0;
}
