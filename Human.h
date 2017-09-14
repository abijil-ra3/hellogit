//class definiton
//Human.h
#ifndef HUMAN_H
#define HUMAN_H

	class Human
	{
		private:
			string name = " ";
			int age =0;
			
		public:
			Human (string n, int a);
			void setName(string);
			string getName ();
			void setAge(int);
			int getAge ();
	};
	
	#endif
