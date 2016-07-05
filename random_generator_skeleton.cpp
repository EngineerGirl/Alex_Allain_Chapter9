/*
 ==============================================================================================================================
 Name        : random_generator_skeleton.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright (c) Siddhata Patil. Sourcecode rights reserved.
 Copyright   : Copyright (c) Alex_Allain_Jumping_into_Cpp_Book. Question rights reserved.
 Question    : Random number generation
 ==============================================================================================================================
 */
#include <iostream>
#include <string>
using namespace std;

#include <cstdlib>
#include <ctime>

int main()
{
//	srand (time(NULL));
int seed = time (NULL);
cout<<"Random generator seed: "<<seed<<endl;
srand (seed);

	for(int i = 0; i<10; i++)
	{
		cout<< ((rand()%11)+1)<<endl;
	}
system ("pause");
return 0;
}
