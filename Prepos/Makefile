prepos: clean prepos.o aag.o def.o sdc.o
	gcc -o prepos prepos.c aag.o def.o sdc.o
prepos.o:
	gcc -c prepos.c
aag.o:
	gcc -c aag.c
def.o:
	gcc -c def.c
sdc.o:
	gcc -c sdc.c
clean:
	rm -rf *.o
