# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11 -Wall

# Source files
SRCS = main.cpp Order.cpp Chef.cpp BurgerChef.cpp FriesChef.cpp SauceChef.cpp DrinksChef.cpp Pickle.cpp Tomato.cpp Lettuce.cpp Patty.cpp Ingredient.cpp Bun.cpp Burger.cpp BurgundySauce.cpp Fries.cpp Drink.cpp Water.cpp Juice.cpp SoftDrink.cpp 

# Object files
OBJS = $(SRCS:.cpp=.o)

# Executable name
EXEC = my_program

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXEC)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJS) $(EXEC)

run:
	./$(EXEC)
