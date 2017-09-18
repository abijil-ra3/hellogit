//class definiton
//Human.h

#ifndef HUMAN_H
#define HUMAN_H
#include <string>
using namespace std;


	class Human
	{
		private:
			string name;
			int age;
			
		public:
			Human (string n, int a);
			void setName(string);
			string getName ();
			void setAge(int);
			int getAge ();
	};
	
	#endif
