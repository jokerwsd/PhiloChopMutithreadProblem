#ifndef _CHOP_H
#define _CHOP_H

#include<mutex>
using namespace std;


class Chop
{
	private:
		//mutex c_lock; 
	public:
		Chop();
		~Chop();
		bool getChop();
		void putChop();
};

#endif
