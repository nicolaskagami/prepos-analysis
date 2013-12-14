prepos: clean prepos.o aag.o def.o
	gcc -o prepos prepos.c aag.o def.o
prepos.o:
	gcc -c prepos.c
aag.o:
	gcc -c aag.c
def.o:
	gcc -c def.c
clean:
	rm -rf *.o
