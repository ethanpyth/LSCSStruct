obj = main.o utilitaire.o interfaceListeSC.o

prog : ${obj}
	gcc ${obj} -o prog

%.o : %.c
	gcc -c $^

run : 
	./prog
