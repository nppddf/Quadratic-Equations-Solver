TARGET = main
CC = gcc
CFLAGS = -I./include

PREF_SRC = ./src/
PREF_OBJ = ./obj/


SRC_FILES = $(filter-out $(PREF_SRC)main.c,$(wildcard $(PREF_SRC)*.c))
OBJ_FILES = $(patsubst $(PREF_SRC)%.c,$(PREF_OBJ)%.o,$(SRC_FILES))

MAIN_FILE = $(PREF_SRC)main.c
MAIN_OBJ = $(PREF_OBJ)main.o

ALL_OBJ = $(OBJ_FILES) $(MAIN_OBJ)


.PHONY: clean

all: $(PREF_OBJ) $(TARGET)

$(PREF_OBJ):
	mkdir -p $(PREF_OBJ)


$(TARGET): $(ALL_OBJ)
	$(CC) $(ALL_OBJ) -o $(TARGET) -lm

$(PREF_OBJ)%.o: $(PREF_SRC)%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(MAIN_OBJ): $(MAIN_FILE)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	-rm -f $(TARGET)
	-rm -f $(PREF_OBJ)*.o