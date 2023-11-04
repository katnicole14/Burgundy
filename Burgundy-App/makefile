TARGET = myprogram

SRCS = ship.cpp TableState.cpp Unoccupied.cpp \
       Occupied.cpp BillPaid.cpp Dirty.cpp \
	   Order.cpp Customer.cpp Iterator.cpp \
       main.cpp

OBJS = Table.o TableState.o Unoccupied.o \
	   Occupied.o BillPaid.o Dirty.o \
	   Order.o Customer.o Iterator.o \
       main.o

all: $(TARGET)

$(TARGET): $(OBJS)
	g++ $(OBJS) -o $(TARGET)

Iterator.o: Iterator.cpp
	g++ -c Iterator.cpp

Customer.o: Customer.cpp
	g++ -c Customer.cpp

Order.o: Order.cpp 
	g++ -c Order.cpp

Table.o: Table.cpp
	g++ -c Table.cpp

TableState.o: TableState.cpp
	g++ -c TableState.cpp

Unoccupied.o: Unoccupied.cpp
	g++ -c Unoccupied.cpp

BillPaid.o: BillPaid.cpp
	g++ -c BillPaid.cpp

Occupied.o: Occupied.cpp
	g++ -c Occupied.cpp

Dirty.o: Dirty.cpp
	g++ -c Dirty.cpp

main.o: main.cpp
	g++ -c main.cpp

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

