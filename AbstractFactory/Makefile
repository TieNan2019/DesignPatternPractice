TGT = run
SRCS = absfactory.h drinkstore.h main.cpp
CC = /usr/bin/g++

$(TGT): $(SRCS:.cpp=.o)
	@# $(CC) $(OBJ) -o $(TGT)
	$(CC) $^ -o $@

clean:
	@rm -f $(TGT) *.o