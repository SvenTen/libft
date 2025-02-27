# Library Name
NAME = libft.a

# Compiler & Flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Directories
SRC_DIR = src
OBJ_DIR = obj
INCLUDES = -I includes/

# Find all .c files recursively in src/ and replace .c with .o for objects
SRC = $(wildcard $(SRC_DIR)/*/*.c)
OBJ = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))

# Archive command
AR = ar rcs

# Rules
all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

# Compile .c files into .o inside obj/ maintaining subdirectory structure
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Ensure obj/ directory exists
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)/char $(OBJ_DIR)/string $(OBJ_DIR)/memory \
		$(OBJ_DIR)/math $(OBJ_DIR)/list $(OBJ_DIR)/io $(OBJ_DIR)/parsing $(OBJ_DIR)/sort

# Cleanup rules
clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
