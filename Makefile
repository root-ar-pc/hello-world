hello: hello.o
	gcc -o hello hello.o
  
hello.o: src/hello.c
	gcc -c src/hello.c
  
clean:
	rm -rvf hello.o
