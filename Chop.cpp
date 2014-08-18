#include<iostream>
#include<thread>
#include<mutex>
#include"Chop.h"

using namespace std;
mutex c_lock;

Chop::Chop()
{
}

bool Chop::getChop()
{
	return c_lock.try_lock();
}

void Chop::putChop()
{
	c_lock.unlock();
	cout<<" I'm done, you can have the chopstics"<<endl;
}

Chop::~Chop()
{
}
