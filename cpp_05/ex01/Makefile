CC					=	c++
CFLAGS				=	-Wall -Wextra -Werror -Wshadow -std=c++98
NAME				=	FormUpMaggots
FILES				=	main Bureaucrat Form
SRC					=	$(addsuffix .cpp, $(FILES))
OBJ_FOLDER			=	objects/
OBJ					=	$(addprefix $(OBJ_FOLDER), $(SRC:.cpp=.o))

all					:	$(NAME)

$(NAME)				: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_FOLDER)%.o	: %.cpp
	@mkdir -p $(OBJ_FOLDER)
	$(CC) $(CFLAGS) -MMD -c $< -o $@

-include $(OBJ_FOLDER)*.d

clean				:
	@rm -rf $(OBJ_FOLDER)

fclean				:	clean
	@rm -rf $(NAME)

re					:	fclean all

debug				:	CFLAGS += -g3 -DDEBUG
debug				:	re

fsanitize			:	CFLAGS += -fsanitize=address
fsanitize			:	debug

.PHONY				:	all clean fclean re debug fsanitize
.DELETE_ON_ERROR	:
.SILENT				: