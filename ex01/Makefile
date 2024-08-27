# Name of the executable
NAME = phonebook

# Compiler and flags
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Source files
SRC = main.cpp Contact.cpp PhoneBook.cpp

# Object files
OBJ = $(SRC:.cpp=.o)

# Rule to build the executable
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

# Rule to clean object files
clean:
	rm -f $(OBJ)

# Rule to clean everything (including the executable)
fclean: clean
	rm -f $(NAME)

# Rule to recompile
re: fclean $(NAME)

# Phony rules
.PHONY: all clean fclean re
