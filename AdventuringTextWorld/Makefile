# Start Makefile

# Define variables
CC   = gcc
FLAG = -Wall
LINK = -lcurses -lm
RM   = rm -rf

# The root
target: proj
	echo make finished! > finished.txt

# Compile the .o file to generate executable file
proj: main.o base.o control.o screen.o timer.o moveobj
	$(CC) obj/*.o $(LINK) -o bin/result.exe

# Compile the .c file into .o file
main.o:
	$(CC) $(FLAG) -c src/main.c
base.o:
	$(CC) $(FLAG) -c src/sys/base.c
control.o:
	$(CC) $(FLAG) -c src/sys/control.c
screen.o:
	$(CC) $(FLAG) -c src/sys/screen.c
timer.o:
	$(CC) $(FLAG) -c src/sys/timer.c
moveobj:
	mv *.o obj

# Clean the .o files and core
clean:
	$(RM) obj/*.o bin/result.exe bin/core ./core finished.txt

# Run Executable
run:
	./bin/result.exe

# End of Makefile
