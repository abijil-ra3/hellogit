// main.cpp
//the client

#include <iostream>
#include <vector>
#include "Human.h"

using namespace std;
int main()
{
	vector <Human> person = {
		{"Thing1", 26},
		{"Thing2", 26},
		{"Fish", 3},
		{"CindyLou", 30},
		};
		
	for (auto x : person)
	{
		cout << x.getName() " " << x.getAge() << endl;
	}
	
	cout << endl;
}
