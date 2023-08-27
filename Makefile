objects = main.o factorial.o gcd.o hello.o 
output = main
GNU = g++
CLEAR = rm -rf


main : $(objects)
	@echo "Linking objects to main file"
	@$(GNU) -o $(output) $(objects)
	@make clean_objects

main.o : main.cpp functions.h
	@echo "Creating Main object"
	@$(GNU) -c main.cpp

gcd.o : gcd.cpp functions.h
	@echo "Creating GCD object"
	@$(GNU) -c gcd.cpp

hello.o : hello.cpp functions.h
	@echo "Creating Hello object"
	@$(GNU) -c hello.cpp

factorial.o : factorial.cpp functions.h
	@echo "Creating Factorial object"
	@$(GNU) -c factorial.cpp

clean :
	@echo "Deleting all Outputs"
	@$(CLEAR) *.o main

clean_objects :
	@echo "Deleting all Objects"
	@$(CLEAR) *.o


