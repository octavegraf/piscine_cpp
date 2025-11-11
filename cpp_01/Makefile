SRC_FOLDER			=	ex00/ ex01/ ex02/ ex03 ex04/ ex05/ ex06/

all					:
	@for dir in $(SRC_FOLDER); do $(MAKE) -C $$dir all; done

clean				:
	@for dir in $(SRC_FOLDER); do $(MAKE) -C $$dir clean; done

fclean				:
	@for dir in $(SRC_FOLDER); do $(MAKE) -C $$dir fclean; done

re					:
	@for dir in $(SRC_FOLDER); do $(MAKE) -C $$dir re; done

debug				:
	@for dir in $(SRC_FOLDER); do $(MAKE) -C $$dir debug; done

fsanitize			:
	@for dir in $(SRC_FOLDER); do $(MAKE) -C $$dir fsanitize; done

.PHONY				:	all clean fclean re debug fsanitize
.DELETE_ON_ERROR	:
.SILENT				: