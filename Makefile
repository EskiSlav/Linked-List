compile: compile_list compile_main
	g++ -Wall obj/main.o obj/list.o -o main
	./main

compile_main: main.cpp
	g++ -g -c main.cpp -o obj/main.o

compile_list: list.cpp
	g++ -g -c list.cpp -o obj/list.o