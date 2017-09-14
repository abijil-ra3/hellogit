// The class implementation
//Human.h
#include "Human.h"

Human :: Human ( string n, int a)
{
	name = n;
	age = a;
}

void setName :: (string n)
{
	name = n;
}

string getName :: ()
{
	return name;
}

void setAge :: (int a)
{
	age = a;
}

int getAge :: ()
{
	return age;
}
