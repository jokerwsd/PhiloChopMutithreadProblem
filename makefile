CC = g++
EXE = PhiloProb
OBJ = main.o Philo.o Chop.o

$(EXE) : $(OBJ)
	$(CC) -std=c++11 -o $(EXE) $(OBJ)

main.o : main.cpp Chop.h Philo.h
	$(CC) -std=c++11 -c main.cpp 

Philo.o : Philo.cpp Philo.h Chop.h
	$(CC) -std=c++11 -c Philo.cpp

Chop.o : Chop.cpp Chop.h Philo.h
	$(CC) -std=c++11 -c Chop.cpp

.PHONY : clean
clean :
	rm $(OBJ)

