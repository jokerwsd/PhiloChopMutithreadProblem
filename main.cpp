#include<iostream>
#include<thread>
#include"Chop.h"
#include"Philo.h"

using namespace std;

int main()
{
	Chop c1;
	Chop c2;
	Chop c3;
	Chop c4;

	char* p1 = "Epicurus";
	char* p2 = "Confucious";
	char* p3 = "Plato";
	char* p4 = "Aristotle";

	Philo Epicurus(p1,c1,c4);
	Philo Confucious(p2,c2,c1);
	Philo Plato(p3,c3,c2);
	Philo Aristotle(p4,c4,c3);

	Epicurus.dinnerStart();
	Confucious.dinnerStart();
	Plato.dinnerStart();
	Aristotle.dinnerStart();

	return 0;
}
	

