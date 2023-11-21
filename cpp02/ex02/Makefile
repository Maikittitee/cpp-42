NAME	= a.out

CC		= c++
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS	= test.cpp Fixed.cpp

HEADER	= Fixed.hpp

OBJS	= $(SRCS:.cpp=.o)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@ -L. -l$(HEADER)

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re