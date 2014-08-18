#ifndef _PHILO_H
#define _PHILO_H

#include<thread>
#include"Chop.h"

using namespace std;

class Philo
{
	private:
		char* name;
		Chop left;
		Chop right;
		thread p;
	public:
		Philo(char* pname,Chop left,Chop right);
		~Philo();
		bool getChop();
		void putChop();

		void eatFood();
		void chewFood();

		void dinnerStart();
};

#endif

