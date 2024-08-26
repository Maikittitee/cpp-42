NAME	= btc

CC		= c++
RM		= rm -f
CFLAGS	= -std=c++98  -Wall -Wextra -Werror 

SRCS	= main.cpp BitcoinExchange.cpp

HEADER	= BitcoinExchange.hpp

OBJS	= $(SRCS:.cpp=.o)

%.o:%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re