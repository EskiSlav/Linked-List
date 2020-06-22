compile: compile_list compile_main
	mkdir obj
	g++ -Wall obj/main.o obj/list.o -o main
	./main

debug: compile_list compile_main
	mkdir obj
	g++ -Wall obj/main.o obj/list.o -o main
	gdb ./main

compile_main: main.cpp
	g++ -c -g main.cpp -o obj/main.o

compile_list: list.cpp
	g++ -c -g list.cpp -o obj/list.o
