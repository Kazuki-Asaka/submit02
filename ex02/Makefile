SRCS	=	Fixed.cpp\
			main.cpp

OBJS	=	$(SRCS:.cpp=.o)

CXX		= clang++

CXXFLAGS	= -std=c++98
CFLAGS 	+= -Wall -Wextra -Werror

NAME	= ex02

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(OBJS) $(CXXFLAGS) -o $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re:		fclean all

.PHONY:all clean fclean re