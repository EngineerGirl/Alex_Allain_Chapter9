/*
 ==============================================================================================================================
 Name        : random_generator_range.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright ©  Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Print random nos in a particular range
 ==============================================================================================================================
 */
#include <iostream>
#include <string>
using namespace std;

#include <cstdlib>
#include <ctime>

int randRange(int low, int high)
{	
	return rand()%(high-low) + low;
}

int main()
{
	srand (time(NULL));
	for(int i = 0; i<25; i++)
	{
		cout << randRange(7,25)<<endl;
	}
system ("pause");
return 0;
}
