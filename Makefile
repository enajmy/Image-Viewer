CC=g++
CFLAGS=-I. -I/usr/include/opencv4 `pkg-config opencv4 --cflags --libs`
DEPS = imgViewer.h
OBJ = main.o imgViewer.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

imageViewer: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
