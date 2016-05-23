sort: src/ur.o src/ur_2.o
	gcc -o sort  src/ur.o src/ur_2.o  -lm

src/ur.o: src/ur.c
	gcc -c -o src/ur.o src/ur.c

src/ur_2.o: src/ur_2.c
	gcc -c -o src/ur_2.o src/ur_2.c

test: test/main.o test/test_ur.o src/ur.o
	gcc -o wall test/main.o test/test_ur.o src/ur.o -lm

test/main.o: test/main.c
	gcc -c -o test/main.o test/main.c 
	  
test/test_ur.o: test/test_ur.c
	gcc -c -o test/test_ur.o  test/test_ur.c -I src




