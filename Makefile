NAME = libft.a
OBJS = ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_strlen.o ft_memset.o \
	   ft_bzero.o ft_memcpy.o ft_memmove.o ft_strlcpy.o ft_strlcat.o ft_toupper.o ft_tolower.o \
	   ft_strchr.o ft_strrchr.o ft_strncmp.o ft_memchr.o ft_memcmp.o ft_strnstr.o ft_atoi.o
CFLAGS = -Wall -Werror -Wextra

# Funcion principal : Generar el comprimido
all: $(NAME)

$(NAME): $(OBJS) 
	@ar rcs $(NAME) $(OBJS) 
	@printf "%b%s compiled💦%b\n" "\e[0;32m" $@ "\e[0m"

# Antes de all necesita generar las dependencias
# ft_atoi.o : ft_atoi.c libft.h
# ft_isalpha.o : ft_isalpha.c libft.h

# Para evitar tener que generar todos los ficheros uno a uno,
# se puede utilizar un patron automatico 

# @ = Resultado (%.o)  < = "Material" (%.c)

%.o : %.c libft.h Makefile
	@gcc -c $(CFLAGS) $< -o $@
	@printf "%b%s compiled😎%b\n" "\e[1;95m" $< "\e[0m"

clean:
	@rm -f *.o
	@printf "%b%s limpito🌴%b\n" "\e[0;105m" $@ "\e[0m"

fclean : clean
	@rm -f $(NAME)
	@printf "%b%s bien limpito🐕%b\n" "\e[1;93m" $@ "\e[0m"

re: fclean all

