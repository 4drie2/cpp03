# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abidaux <abidaux@student.42lehavre.fr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/03 18:29:13 by abidaux           #+#    #+#              #
#    Updated: 2026/01/05 15:03:53 by abidaux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

# Project name
NAME		= ScavTrap

# Folders
SRC_DIR		= src
OBJ_DIR		= obj
INC_DIR		= include

# Sources
SRC_FILES	=	ClapTrap.cpp \
				ScavTrap.cpp \
                main.cpp

# Object files
OBJ_FILES	= $(addprefix $(OBJ_DIR)/, $(SRC_FILES:.cpp=.o))

# Include headers
INCLUDES	= -I$(INC_DIR)

# Default rule
all: $(NAME)

# Link objects to create the binary
$(NAME): $(OBJ_FILES)
	@echo "Linking $(NAME)..."
	$(CXX) $(CXXFLAGS) $(OBJ_FILES) -o $(NAME)

# Compile .cpp to .o
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	@mkdir -p $(OBJ_DIR)
	@echo "Compiling $<..."
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

# Ensure obj/ exists
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

# Clean object files
clean:
	@echo "Cleaning object files..."
	@rm -rf $(OBJ_DIR)

# Clean everything
fclean: clean
	@echo "Removing executable..."
	@rm -f $(NAME)

# Rebuild
re: fclean all

# Avoid make interpreting these names as filenames
.PHONY: all clean fclean re