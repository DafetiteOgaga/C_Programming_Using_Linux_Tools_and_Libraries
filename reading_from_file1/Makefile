# define the makefile
CC			= gcc

# define compier flags
CFLAGS		= -std=c11 -Wall -fmax-errors=10 -Wextra

# define lbrary files in ddition to /usr/lib
LFLAGS		= 

# define libraries to use
LIBS		= 

# define object files tha this project needs
OBLFILES	= program.o

# define rhe name of the executable file
MAIN		= program

# generic
all: $(MAIN)

$(MAIN): $(OBLFILES)
	$(CC) $(CFLAGS) -o $(MAIN) $(OBLFILES)

%.o: %.c1
	$(CC) $(CFLAGS) -c -o $@ $<

launch: $(MAIN)
	./$(MAIN)
	
clean:
	rm -f $(MAIN) $(OBLFILES)


# on cli, simply run: make, make launch or make clean