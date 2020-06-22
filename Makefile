compile: obj/main.o obj/list.o
	g++ -Wall obj/main.o obj/list.o -o main
	./main

debug: obj/main.o obj/list.o
	mkdir obj
	g++ -Wall obj/main.o obj/list.o -o main
	gdb ./main

obj/main.o: main.cpp
	mkdir -p obj
	g++ -c -g main.cpp -o obj/main.o

obj/list.o: list.cpp
	mkdir -p obj
	g++ -c -g list.cpp -o obj/list.o
