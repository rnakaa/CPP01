CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = zombie

SRCS = 	main.cpp \
		randomChump.cpp \
		newZombie.cpp

OBJS = $(SRCS:.cpp=.o)

HEADERS = Zombie.hpp 

.PHONY:all
all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) -o $@ $(OBJS)

%.o: %.cpp $(HEADERS)
	$(CPP) $(CPPFLAGS) -c $< -o $@

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

