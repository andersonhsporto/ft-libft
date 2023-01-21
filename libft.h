/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anhigo-s <anhigo-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 23:22:37 by anhigo-s          #+#    #+#             */
/*   Updated: 2023/01/21 00:52:22 by anhigo-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <errno.h>

# define BUFFER_SIZE 100
# define MAX_INT 2147483647
# define MIN_INT 2147483648

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

enum e_sign
{
	POSITIVE = 1,
	NEGATIVE = -1
};

/*
*	@brief Checks for an alphanumeric character; it is equivalent to
*	(isalpha(c) || isdigit(c)).
*	@param c The character to check.
*	@return 1 if c is alphanumeric, 0 otherwise.
*/
int		ft_isalnum(int c);

/*
*	@brief Checks for an alphabetic character; in the standard C locale,
*	it  is  equivalent  to  (isupper(c) || islower(c)).
*	@param c The character to check.
*	@return 1 if c is alphabetic, 0 otherwise.
*/
int		ft_isalpha(int c);

/*
*	@brief checks whether c is a 7-bit unsigned char value that
*	fits into the ASCII character set.
*	@return 1 if c is an ASCII character, 0 otherwise.
*/
int		ft_isascii(int c);

/*
*	@brief Checks for a digit (0 through 9).
*	@param c The character to check.
*	@return 1 if c is a digit, 0 otherwise.
*/
int		ft_isdigit(int c);

/*
*	@brief Checks for any printable character including space.
*	@param c The character to check.
*	@return 1 if c is a printable character, 0 otherwise.
*/
int		ft_isprint(int c);

/*
*	@brief If  c  is a lowercase letter, toupper() returns its
*	uppercase equivalent, if an uppercase representation exists in the
*	current locale.  Otherwise, it returns c.
*	@param c The character to convert.
*	@return The uppercase equivalent of c.
*/
int		ft_tolower(int c);

/*
*	@brief If  c  If  c  is an uppercase letter, tolower() returns its
*	lowercase equivalent, if a lowercase representation exists in the
*	current locale.  Otherwise, it returns c.
*	@param c The character to convert.
*	@return The lowercase equivalent of c.
*/
int		ft_toupper(int c);

/*
*	@brief Convert the initial portion of the string pointed to by str to int
*	@param str The string to convert.
*	@return The converted value or 0 on error.
*/
int		ft_atoi(const char *str);

/*
*	@brief Compares the two strings s1 and s2.
*	locale is not taken into account.
*	The comparison is done using unsigned characters.
*	@param s1 The first string to compare.
*	@param s2 The second string to compare.
*	@param n The number of characters to compare.
*	@return 0 if the strings are equal, 1 if s1 is greater than s2, -1 if s1
*	is less than s2.
*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/*
*	@brief Ccompares the first n bytes (each interpreted as unsigned char)
*	of the memory areas s1 and s2.
*	locale is not taken into account.
*	The comparison is done using unsigned characters.
*	@param s1 The first string to compare.
*	@param s2 The second string to compare.
*	@param n The number of characters to compare.
*	@return 0 if the strings are equal, 1 if s1 is greater than s2, -1 if s1
*	is less than s2.
*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/*
*	@brief Returns a pointer to a new string which is a duplicate of the string.
*	Memory for the new string is obtained with malloc(3),
*	and can be freed with free(3).
*	@param str The string to duplicate.
*	@return Pointer to the duplicated string, or NULL if the allocation failed.
*/
char	*ft_strdup(const char *s1);

/*
*	@brief returns a pointer to the first occurrence of the
*	character c in the string s.
*	@param s The string to search.
*	@param c The character to search for.
*	@return Pointer to the first occurrence of c, or NULL if c is not found.
*/
char	*ft_strchr(const char *s, int c);

/*
*	@brief returns a pointer to the last occurrence of the
*	character c in the string s.
*	@param s The string to search.
*	@param c The character to search for.
*	@return Pointer to the last occurrence of c, or NULL if c is not found.
*/
char	*ft_strrchr(const char *s, int c);

/*
*	@brief Allocates (with malloc(3)) and returns a substring
*	from the string ’s’.
*	The substring begins at index ’start’ and is of maximum size ’len’.
*	@param s1 The string from which to create the substring.
*	@param start The start index of the substring in the string ’s’.
*	@param len The maximum length of the substring.
*	@return The substring, NULL if the allocation fails.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len);

/*
*	@brief Allocates (with malloc(3)) and returns a new string,
*	which is the result of the concatenation of ’s1’ and ’s2’.
*	@param s1 The prefix string.
*	@param s2 The suffix string.
*	@return The new string. NULL if the allocation fails.
*/
char	*ft_strjoin(char const *s1, char const *s2);

/*
*	@brief Allocates (with malloc(3)) and returns a copy of ’s1’
*	with the characters specified in ’set’ removed from the
*	beginning and the end of the string.
*	@param s1 The string to be trimmed.
*	@param set The reference set of characters to trim.
*	@return The trimmed string. NULL if the allocation fails.
*/
char	*ft_strtrim(char const *s1, char const *set);

/*
*	@brief Allocates (with malloc(3)) and returns an array
*	of strings obtained by splitting ’s’ using the
*	character ’c’ as a delimiter. The array must be
*	ended by a NULL pointer.
*	@param s The string to be split.
*	@param c The delimiter character.
*	@return The array of new strings resulting from the split.
*	NULL if the allocation fails.
*/
char	**ft_split(char const *s, char c);

/*
*	@brief Allocates (with malloc(3)) and returns a string
*	representing the integer received as an argument.
*	Negative numbers must be handled.
*	@param n The integer to convert.
*	@return The string representing the integer. NULL if the
*	allocation fails.
*/
char	*ft_itoa(int n);

/*
*	@brief Applies the function ’f’ to each character of
*	the string ’s’ , and passing its index as first
*	argument to create a new string (with malloc(3))
*	resulting from successive applications of ’f’.
*	@param s The string on which to iterate.
*	@param f The function to apply to each character..
*	@return The string created from the successive applications
*	of ’f’. Returns NULL if the allocation fails.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/*
*	@brief Applies the function f to each character of the
*	string passed as argument, and passing its index
*	as first argument. Each character is passed by
*	address to f to be modified if necessary.
*	@param s The string on which to iterate.
*	@param f The function to apply to each character..
*	@return void
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/*
*	@brief Outputs the character ’c’ (with write(3)) to the given file
*	descriptor.
*	@param c The character to output.
*	@param fd The file descriptor on which to write.
*	@return void
*/
void	ft_putchar_fd(char c, int fd);

/*
*	@brief Outputs the string ’s’ (with write(3)) to the given file
*	descriptor.
*	@param s The string to output.
*	@param fd The file descriptor on which to write.
*	@return void
*/
void	ft_putstr_fd(char *s, int fd);

/*
*	@brief Outputs the string ’s’ (with write(3)) to the given file
*	descriptor, followed by a newline.
*	@param s The string to output.
*	@param fd The file descriptor on which to write.
*	@return void
*/
void	ft_putendl_fd(char *s, int fd);

/*
*	@brief Outputs the integer ’n’ (with write(3)) to the given file
*	descriptor.
*	@param n The integer to output.
*	@param fd The file descriptor on which to write.
*	@return void
*/
void	ft_putnbr_fd(int n, int fd);

/*
*	@brief Locate a substring in a string.
*	@param haystack The string to search in.
*	@param needle The string to search for.
*	@param len The length of the string to search for.
*	@return The index of the first occurrence of the substring in the string,
*	or -1 if the substring is not found.
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/*
*	@brief Fill memory with a constant byte.
*	@param s The memory to fill.
*	@param c The byte to fill the memory with.
*	@param n The size of the memory to fill.
*	@return void
*/
void	*ft_memset(void *s, int c, size_t n);

/*
*	@brief Allocate (with malloc(3)) and set to 0
*	a memory area of size n bytes.
*	@param n The size of the memory to allocate.
*	@return The allocated memory. NULL if the allocation fails.
*/
void	*ft_calloc(size_t count, size_t size);

/*
*	@brief Scan the initial n bytes of the memory area pointed to
*	by s for the first ’c’ byte.
*	@param s The memory area to scan.
*	@param c The byte to search for.
*	@param n The size of the memory area to scan.
*	@return The index of the first occurrence of the byte in the memory area,
*	or -1 if the byte is not found.
*/
void	*ft_memchr(const void *s, int c, size_t n);

/*
*	@brief Copy memory area.
*	@param dst The memory area to copy to.
*	@param src The memory area to copy from.
*	@param n The size of the memory area to copy.
*	@return void
*/
void	*ft_memcpy(void *dst, const void *src, size_t n);

/*
*	@brief Copy memory area.
*	@param dest The memory area to copy to.
*	@param src The memory area to copy from.
*	@param c The byte to search for.
*	@param n The size of the memory area to copy.
*	@return void
*/
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);

/*
*	@brief Copies n bytes from memory area src to memory area dest.
*	@param dest The memory area to copy to.
*	@param src The memory area to copy from.
*	@param n The size of the memory area to copy.
*	@return void
*/
void	*ft_memmove(void *dest, const void *src, size_t n);

/*
*	@brief Erases the data in the n bytes of the memory stating at the location
*	pointed to by s.
*	@param s The memory area to erase.
*	@param n The size of the memory area to erase.
*	@return void
*/
void	ft_bzero(void *s, size_t n);

/*
*	@brief calculates the length of the string ’s’.
*	@param s The string to calculate the length of.
*	@return The length of the string.
*/
size_t	ft_strlen(const char *s);

/*
*	@brief Appends string src to the end of dst. It will append at most
*	dstsize - strlen(dst) - 1 characters. It will then NUL-terminate,
*	unless dstsize is 0 or the original dst string was longer than dstsize
*	(in practice this should not happen as it means that either
*	dstsize is incorrect or that dst is not a proper string).
*	If the src and dst strings overlap, the behavior is undefined.
*	@param dst The destiny string in which to concatenate.
*	@param src The source string to concatenate.
*	@param dstsize The total number of bytes in destiny.
*	@return The ft_strlcat() function returns the length of the string it
*	tried to create.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/*
*	@brief Copy and concatenate strings respectively. The resulting
*	string is always null-terminated.
*	@param dst The string to copy to.
*	@param src The string to copy from.
*	@param size The total number of bytes in dst.
*	@return The length of the string it tried to create.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/*
*	@brief Allocates (with malloc(3)) and returns a new
*	element. The variable ’content’ is initialized
*	with the value of the parameter ’content’.
*	The	variable ’next’ is initialized to NULL.
*	@param content The content to create the new element with.
*	@return The new element.
*/
t_list	*ft_lstnew(void *content);

/*
*	@brief Adds the element ’new’ at the beginning of the list.
*	@param list The address of a pointer to the first link of a list.
*	@param new The address of a pointer to the element to be added to the list.
*	@return void
*/
void	ft_lstadd_front(t_list **list, t_list *new);

/*
*	@brief Counts the number of elements in a list.
*	@param list The beginning of the list.
*	@return Length of the list.
*/
int		ft_lstsize(t_list *list);

/*
*	@brief Returns the last element of the list.
*	@param list The beginning of the list.
*	@return Last element of the list.
*/
t_list	*ft_lstlast(t_list *list);

/*
*	@brief Adds the element ’new’ at the end of the list.
*	@param list The address of a pointer to the first link of a list.
*	@param new The address of a pointer to the element to be added to the list.
*	@return void
*/
void	ft_lstadd_back(t_list **list, t_list *new);

/*
*	@brief Takes as a parameter an element and frees (with free(3)) the
*	memory of the element’s content using the function
*	’del’ given as a parameter and free the element.
*	The memory of ’next’ must not be freed.
*	@param list The element to free.
*	@param del The address of the function used to delete the content.
*	@return void
*/
void	ft_lstdelone(t_list *list, void (*del)(void*));

/*
*	@brief Deletes and frees the given element and every
*	successor of that element, using the function ’del’ and free(3).
*	Finally, the pointer to the list must be set to NULL.
*	@param list The address of a pointer to an element.
*	@param del The address of the function used to delete the
*	content of the element.
*	@return void
*/
void	ft_lstclear(t_list **list, void (*del)(void *));

/*
*	@brief Iterates the list ’list’ and applies the function
*	’f’ to the content of each element.
*	@param list The address of a pointer to an element.
*	@param f The address of the function used to iterate on the list.
*	@return void
*/
void	ft_lstiter(t_list *list, void (*f)(void *));

/*
*	@brief Iterates the list ’list’ and applies the function
*	’f’ to the content of each element. Creates a new
*	list resulting of the successive applications of
*	the function ’f’. The ’del’ function is used to
*	delete the content of an element if needed.
*	@param list The address of a pointer to an element.
*	@param f The address of the function used to iterate on the list.
*	@param del The address of the function used to delete the
*	content of an element if needed.
*	@return The new list. NULL if the allocation fails.
*/
t_list	*ft_lstmap(t_list *list, void *(*f)(void *), void (*del)(void *));

/*
*	@brief Allocates (with malloc(3)) and returns a new string,
*	which is the result of the concatenation of ’string0’,
*	’string1’ and ’string2’.
*	@param string0 The prefix string.
*	@param string1 The middle string.
*	@param string2 The suffix string.
*	@return The new string. NULL if the allocation fails.
*/
char	*ft_strtjoin(char *string0, char *string1, char *string2);

/*
*	@brief Compares  the two strings s1 and s2.
*	The locale is not taken into account.
*	The comparison is done using unsigned characters.
*	@param s1 The first string.
*	@param s2 The second string.
*	@return The strcmp() and strncmp() functions return an integer less than,
*	equal to, or greater than zero if s1 (or the first n bytes thereof)
*	is found,  respectively, to be less than, to match, or be greater than s2.
*/
int		ft_strcmp(const char *s1, const char *s2);

/*
*	@brief Check for white-space characters. In the "C" locale, these are:
*	space, form-feed ('\f'), newline ('\n'), carriage return ('\r'),
*	horizontal tab ('\t'), and vertical tab ('\v').
*	@param c The character to check.
*	@return 1 if the character is a white-space character, 0 otherwise.
*/
int		ft_isspace(int c);

/*
*	@brief Breaks a string into after the first occurrence of the
*	delimiter.
*	@param input The string to break.
*	@param d The delimiter.
*	@return The string after the delimiter.
*/
char	*ft_strtok(char *input, char d);

/*
*	@brief get line froam a file descriptor
*	@param fd The file descriptor.
*	@return The line read. NULL if the allocation fails.
*/
char	*get_next_line(int fd);

#endif
