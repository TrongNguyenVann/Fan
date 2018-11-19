CPP = g++
CPPFLAGS = -c -std=c++11 -Wall -g
TARGET = Fan
INCLUDE = ./include

all: linking
		@echo "Successfully build " $(TARGET)
compile:
		@echo "Compiling"
		$(CPP) -I$(INCLUDE) $(CPPFLAGS) ./src/fan.cpp -o ./build/fan.o
		$(CPP) -I$(INCLUDE) $(CPPFLAGS) ./src/Main.cpp -o ./build/Main.o
linking: compile
		@echo "Linking process"
		$(CPP) ./build/*.o -o ./build/bin/$(TARGET)
clean:
		@echo "Cleaning "
		rm ./build/*.o ./build/bin/Fan