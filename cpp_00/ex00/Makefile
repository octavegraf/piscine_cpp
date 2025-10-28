CC					=	g++
CFLAGS				=	-Wall -Wextra -Werror
NAME				=	megaphone
SRC					=	megaphone.cpp
OBJ_FOLDER			=	objects/
OBJ					=	$(addprefix $(OBJ_FOLDER), $(SRC:.cpp=.o))

all					:	$(NAME)

$(NAME)				: $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

$(OBJ_FOLDER)%.o	: $(SRC_FOLDER)%.cpp $(HEADER)
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