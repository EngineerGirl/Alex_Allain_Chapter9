/*
 ==============================================================================================================================
 Name        : qs1.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright (c) Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright (c) Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Write a program that simulates a coin flip. Run it many times—do the results look random to you?
 ==============================================================================================================================
 */
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

#include <cstdlib>
#include <ctime>

int main()
{
int seed = time (NULL);
cout<<seed<<endl;
srand (seed);

	for(int i = 0; i<10; i++)
	{
		int a = (rand()%2);
  //cout<< a<<endl;
  if ( a == 0) cout<< "\n Heads"<< endl;
  else cout<< "\n tails"<<endl;
	}
system ("pause");
return 0;
}
