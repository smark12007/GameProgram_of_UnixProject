# Start Makefile

# Define variables
CC   = gcc
FLAG = -Wall
LINK = -lcurses -lm
RM   = rm -rf

# The root
target: AdventuringTextWorld
	echo make finished! > finished.txt

# Compile the .o file to generate executable file
AdventuringTextWorld: sys prog main.o moveobj
	$(CC) obj/*.o $(LINK) -o bin/AdventuringTextWorld.exe
sys: base.o control.o screen.o soundeffect.o timer.o lib.o
prog: 

# Compile the .c file into .o file

#	src
main.o:
	$(CC) $(FLAG) -c src/main.c

#	src/sys
base.o:
	$(CC) $(FLAG) -c src/sys/base.c
control.o:
	$(CC) $(FLAG) -c src/sys/control.c
screen.o:
	$(CC) $(FLAG) -c src/sys/screen.c
soundeffect.o:
	$(CC) $(FLAG) -c src/sys/soundeffect.c
timer.o:
	$(CC) $(FLAG) -c src/sys/timer.c
lib.o:
	$(CC) $(FLAG) -c src/sys/lib.c

#	src/prog


moveobj:
	mv *.o obj

# Clean the .o files and core
clean:
	$(RM) *.o obj/*.o bin/core ./core finished.txt bin/AdventuringTextWorld.exe

# Run Executable
run:
	./bin/AdventuringTextWorld.exe

# End of Makefile
