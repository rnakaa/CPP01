CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = hi_this_is_brain

SRCS = 	main.cpp \
		

OBJS = $(SRCS:.cpp=.o)

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

