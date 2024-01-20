CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = zombie

SRCS = 	main.cpp \
		Zombie.cpp \
		zombieHorde.cpp
		

OBJS = $(SRCS:.cpp=.o)

HEADERS = Zombie.hpp 

.PHONY:all
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY:clean
clean:
	rm -f $(OBJS)

.PHONY:fclean
fclean:clean
	rm -f $(NAME)

.PHONY:re
re:fclean all

.PHONY:do
do:fclean all $(NAME)
	./$(NAME)

