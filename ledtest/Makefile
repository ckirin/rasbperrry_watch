TARGET = ledtest
SOURCE = main.c

CC = gcc
LIBS = -lpthread -lwiringPi

$(TARGET) :
	$(CC) $(CFLAGS) $(SOURCE) -o $(TARGET) $(LIBS)

clean:
	rm -rf *.o $(TARGET)
