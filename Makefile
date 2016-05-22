sort: ur.o ur_2.o
	gcc -o sort  ur.o ur_2.o  -lm

ur.o: ur.c
	gcc -c ur.c

ur_2.o: ur_2.c
	gcc -c ur_2.c

