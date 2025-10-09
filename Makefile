NAME = BenGame
MSG = You didn't add msg so do it again 
SRC = ./main.cpp            	      \
      ./src/Game.cpp                \
      ./src/Player.cpp                \
      ./src/Plate.cpp                \
      ./src/Pawn.cpp                \
      ./src/Case.cpp                \
      ./src/Dice.cpp                


OBJ_DIR = obj
OBJS = $(SRC:%.cpp=$(OBJ_DIR)/%.o)

CC = c++
CFLAGS   = -Wall -Wextra -Werror -std=c++98 -g3 -fno-omit-frame-pointer \
            -MD -MP -I./include 
LDFLAGS  = #-fsanitize=address


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

-include $(OBJS:.o=.d)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

add:
	git add src include .gitignore README.md Makefile
	git status
	git commit -m "$(MSG)"

.PHONY: all clean fclean re add
