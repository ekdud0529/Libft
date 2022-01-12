#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char* str);
void	*ft_memset(void *ptr, int value, size_t num);
void	bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void * source, size_t num);
void	*ft_memmove(void * dest, const void *src, size_t num);
size_t	strlcpy(char *dest, const char *src, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*strchr(const char *str, int c);


#endif