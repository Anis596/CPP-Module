NAME		= Megaphone
CC			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
SRC			= main.cpp
OBJ			= $(SRC:.cpp=.o)

# Règle par défaut
all: $(NAME)

# Compilation de l'exécutable
$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

# Compilation des fichiers objets (.o) à partir des sources (.cpp)
%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

# Nettoyage des fichiers objets
clean:
	rm -f $(OBJ)

# Nettoyage complet (objets + exécutable)
fclean: clean
	rm -f $(NAME)

# Recompilation complète
re: fclean all

.PHONY: all clean fclean re
