SRCS	=	Fixed.cpp\
			main.cpp\
			Point.cpp\
			bsp.cpp

OBJS	=	$(SRCS:.cpp=.o)

CXX		= c++

CXXFLAGS	= -std=c++98
CFLAGS 	+= -Wall -Wextra -Werror

NAME	= ex03

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(OBJS) $(CXXFLAGS) -o $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re:		fclean all

.PHONY:all clean fclean re