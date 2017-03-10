all:	qb1 qb2 qb3 qb4

qb1:	qb1.c
	gcc -g -O2 -Wall -o $@ $? -l quantum -static -lm

qb2:	qb2.c
	gcc -g -O2 -Wall -o $@ $? -l quantum -static -lm

qb3:	qb3.c
	gcc -g -O2 -Wall -o $@ $? -l quantum -static -lm
qb4:	qb4.c
	gcc -g -O2 -Wall -o $@ $? -l quantum -static -lm

clean:
	rm qb1 qb2 qb3 qb4
