#include <iostream>
#include <thread>
#include "Philo.h"
#include "Chop.h"

using namespace std;

Philo::Philo(char* pname,Chop left,Chop right)
{
	this->name = pname;
	this->left = left;
	this->right = right;
}

void Philo::eatFood()
{
	if(getChop())
	{
		cout<<this->name<<" start to eat!"<<endl;
		chewFood();
		putChop();
	}
}

void Philo::chewFood()
{
	cout<<"Yum~ "<<endl;
}

bool Philo::getChop()
{
	if(!left.getChop())
	{
		return false;
	}
	if(!right.getChop())
	{
		left.putChop();
		return true;
	}
	return true;
}

void Philo::putChop()
{
	left.putChop();
	right.putChop();
}

void Philo::dinnerStart()
{
	thread p(&Philo::eatFood,this);
	p.join();
}

Philo::~Philo()
{
}
