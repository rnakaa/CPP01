CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = unnecessary_violence

HEADERS = HumanA.hpp\
          HumanB.hpp\
          Weapon.hpp

SRCS = HumanA.cpp\
	   HumanB.cpp\
	   Weapon.cpp\
	   main.cpp

OBJS = $(SRCS:.cpp=.o)

.PHONY:all
all:$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(SRCS)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY:clean
clean:
	rm -f $(OBJS)

.PHONY:fclean
fclean: clean
	rm -f $(NAME)

.PHONY:re
re:fclean all

.PHONY:test
test:fclean all $(NAME)
	./$(NAME)

