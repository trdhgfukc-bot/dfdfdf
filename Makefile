CC=gcc
CFLAGS=-Wall --pedantic -Wextra -std=c99
BIN=./bin
SRC=./src
TESTDIR=./tests
EXTRA=./extra

<<<<<<< HEAD
all: $(BIN)/exercise1 $(BIN)/exercise2 $(BIN)/exercise3 $(BIN)/exercise4 $(BIN)/exercise5

$(BIN)/exercise1: bin
	$(CC) $(CFLAGS) $(SRC)/exercise1.c -o $(BIN)/exercise1
	
$(BIN)/exercise2: bin
	$(CC) $(CFLAGS) $(SRC)/exercise2.c -o $(BIN)/exercise2

$(BIN)/exercise3: bin
	$(CC) $(CFLAGS) $(SRC)/exercise3.c -o $(BIN)/exercise3

$(BIN)/exercise4: bin
	$(CC) $(CFLAGS) $(SRC)/exercise4.c -o $(BIN)/exercise4

$(BIN)/exercise5: bin
	$(CC) $(CFLAGS) $(SRC)/exercise5.c -o $(BIN)/exercise5

test1: $(BIN)/exercise1
	$(TESTDIR)/test1.sh

test2: $(BIN)/exercise2
	$(TESTDIR)/test2.sh

test3: $(BIN)/exercise3
	$(TESTDIR)/test3.sh

test4: $(BIN)/exercise4
	$(TESTDIR)/test4.sh

test5: $(BIN)/exercise5
	$(TESTDIR)/test5.sh
=======
TARGET1 = test_runner1
TARGET2 = test_runner2
TARGET3 = test_runner3

$(TARGET1): $(SRC)/advanced_array_function.c $(TESTDIR)/test_max_sum_array.c $(EXTRA)/Unity/unity.c $(BIN)
	$(CC) $(CFLAGS) $(SRC)/advanced_array_function.c \
	$(TESTDIR)/test_max_sum_array.c \
	$(EXTRA)/Unity/unity.c -o $(BIN)/$(TARGET1)

$(TARGET2): $(SRC)/advanced_array_function.c $(TESTDIR)/test_longest_increasing_subsequence.c $(EXTRA)/Unity/unity.c $(BIN)
	$(CC) $(CFLAGS) $(SRC)/advanced_array_function.c \
	$(TESTDIR)/test_longest_increasing_subsequence.c \
	$(EXTRA)/Unity/unity.c -o $(BIN)/$(TARGET2)
>>>>>>> 0a9229e7cb10baa9365cfb904fed7882381d9072

$(TARGET3): $(SRC)/advanced_array_function.c $(TESTDIR)/test_merge_intervals.c $(EXTRA)/Unity/unity.c $(BIN)
	$(CC) $(CFLAGS) $(SRC)/advanced_array_function.c \
	$(TESTDIR)/test_merge_intervals.c \
	$(EXTRA)/Unity/unity.c -o $(BIN)/$(TARGET3)

test1: $(TARGET1)
	./$(BIN)/$(TARGET1)

test2: $(TARGET2)
	./$(BIN)/$(TARGET2)

test3: $(TARGET3)
	./$(BIN)/$(TARGET3)

$(BIN):
	mkdir ./bin

clean:
	rm -rf $(BIN)

.PHONY: test clean