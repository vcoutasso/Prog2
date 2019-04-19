PROJ_NAME=a.out

# .cpp files
C_SOURCE=$(wildcard ./src/*.cpp)

# .h files
H_SOURCE=$(wildcard ./src/*.h)

# Object files
OBJ=$(subst .cpp,.o,$(subst src,obj,$(C_SOURCE)))

# Compiler
CC=g++

# Compiler flags
CC_FLAGS = -c		\
	   -Wall	\
	   -pedantic	\
	   -lmotor.h	\
	   -lcarro.h	\
	   -ldata.h

# Linker flags
L_FLAGS=
	  

# Compilation and linking

all: objFolder $(PROJ_NAME)

$(PROJ_NAME): $(OBJ)
	@ echo -e '\033[1;37mBuilding binary using G++ Linker:\033[0m $@'
	$(CC) -o $@ $^ $(L_FLAGS)
	@ echo
	@ echo -e '\033[1;37mFinished building binary:\033[0m $@'

./obj/%.o: ./src/%.c ./src/%.h
	@ echo -e '\033[1;37mBuilding target using G++ Compiler:\033[0m $<'
	$(CC) -o $@ $< $(CC_FLAGS)
	@ echo

./obj/main.o: ./src/main.cpp $(H_SOURCE)
	@ echo -e '\033[1;37mBuilding target using G++ Compiler:\033[0m $<'
	$(CC) -o $@ $< $(CC_FLAGS)
	@ echo

debug: L_FLAGS += -DDEBUG -g
debug: CC_FLAGS += -DDEBUG -g
debug: objFolder $(PROJ_NAME)

objFolder:
	@ mkdir -p obj

remake: clean objFolder $(PROJ_NAME)

clean:
	@ echo -e '\033[1;37mCleaning up files...\033[0m'
	@ rm -rf ./obj/*.o *~ $(PROJ_NAME)
	@ rmdir obj
