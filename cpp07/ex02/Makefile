NAME = a.out

all :
	clang++ -o $(NAME) -g3 -fsanitize=address -Wall -Wextra -Werror -std=c++98 *.cpp
clean :
	rm $(NAME)
re : clean all
