TARGET = myprogram
CXX=g++
CFLAGS=-I. -Wall

OBJS = Table.o TableState.o Unoccupied.o \
	   Occupied.o BillPaid.o Dirty.o \
	   Order.o Customer.o Iterator.o \
       main.o

all: $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(TARGET)
    
%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

