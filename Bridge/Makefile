ONAME= labo1
CC=g++


# On OpenSUSE the c99 command doesn't seem to be GCC and the -W flags don't seem to work there, so it's part of the CFLAGS
CPPFLAGS= 
CFLAGS= -Wall -O2
LDFLAGS= 

.PHONY: all build clean run

OBJ= main.o shape.o circle.o hexagon.o rectangle.o drawing.o drawingv1.o drawingv2.o libv1.o libv2.o

all: build

# Dependencies
main.o: shape.h
shape.o: shape.h
circle.o: shape.h circle.h
hexagon.o: shape.h hexagon.h
rectangle.o: shape.h rectangle.h
drawing.o: drawing.h
drawingv1.o: drawing.h drawingv1.h libv1.h
drawingv2.o: drawing.h drawingv2.h libv2.h
libv1.o: libv1.h
libv2.o: libv2.h

%.o: %.cpp
	$(CC) -o $@ -c $< $(CFLAGS) $(CPPFLAGS)

build: $(OBJ)
	$(CC) $(OBJ) -o $(ONAME) $(LDFLAGS)
clean:
	rm -f *.o $(ONAME)

