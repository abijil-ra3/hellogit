// The class implementation
//Human.h
#include "Human.h"
#include <string>

using namespace std;
Human::Human ( string n, int a)
{
	name = n;
	age = a;
}

void Human::setName(string n)
{
	name = n;
}

string Human::getName()
{
	return name;
}

void Human::setAge(int a)
{
	age = a;
}

int Human::getAge()
{
	return age;
}
