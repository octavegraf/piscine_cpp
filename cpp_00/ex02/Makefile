CC					=	g++
CFLAGS				=	-Wall -Wextra -Werror -std=c++98
NAME				=	tests
CLASSES				=	Account
SRC					=	$(addsuffix .cpp, $(NAME) $(CLASSES))
OBJ_FOLDER			=	objects/
OBJ					=	$(addprefix $(OBJ_FOLDER), $(SRC:.cpp=.o))

all					:	$(NAME)

$(NAME)				: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_FOLDER)%.o	: %.cpp
	@mkdir -p $(OBJ_FOLDER)
	$(CC) $(CFLAGS) -c $< -o $@

clean				:
	@rm -rf $(OBJ_FOLDER)

fclean				:	clean
	@rm -rf $(NAME)

re					:	fclean all

debug				:	CFLAGS += -g3
debug				:	re

fsanitize			:	CFLAGS += -fsanitize=address
fsanitize			:	debug

.PHONY				:	all clean fclean re debug fsanitize
.DELETE_ON_ERROR	:
.SILENT				: