CC = g++
RM = rm -f
INCLUDE = -I/usr/incude -I/usr/local/include
LIB_DIR = -L/usr/lib64 -L/usr/local/lib64 -L/usr/lib -L/usr/local/lib
LIB =
OPT = -O0 -g3 -Wall
TARGET = sorter
SRC= main.cpp

all: $(SRC:.cpp=.o) 
	$(CC) $(INCLUDE) $(LIB_DIR) $(OPT) -o $(TARGET) $(SRC:.cpp=.o)

$(SRC:.cpp=.o): $(SRC)
	$(CC) $(INCLUDE) $(LIB_DIR) $(OPT) -c $(SRC)

	
.PHONY: clean
clean:
	$(RM) *.o $(TARGET) $(TEST_TARGET) gmon.out *.gc* *.xml
