CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

HEADERS = main.hpp

NAME = sed_is_for_loser

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

.PHONY:all
all: $(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $<

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY:clean
clean:
	rm -f $(OBJS)

.PHONY:fclean
fclean:clean
	rm -f $(NAME)

.PHONY:re
fclean:fclean all

.PHONY:test
test:re
	./$(NAME)
