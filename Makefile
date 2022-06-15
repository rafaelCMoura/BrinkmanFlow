all: src/sample/main.o src/sample/sample.o
	gcc -c src/sample/main.c -o src/sample/main.o
	gcc -c src/sample/sample.c -o src/sample/sample.o
test: test/check_sample.o
	gcc -c test/check_sample.c -lcheck -lm -lpthread -lrt -o test/check_sample.o