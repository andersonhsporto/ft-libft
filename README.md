# Libft
C library regrouping usual functions
---
### Part 1 - Libc functions

* > [ft_isalpha](/ft_isalpha.c) `(int	ft_isalpha(int c))` checks  for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)).

* > [ft_isdigit](/ft_isdigit.c) `(int	ft_idigit(int c))` checks for a digit (0 through 9).

* > [ft_isalnum](/ft_isalnum.c) `(int	ft_isalnum(int c))` checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)).

* > [ft_isascii](/ft_isascii.c) `(int	ft_isascii(int c))` checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.

* > [ft_isprint](/ft_isprint.c) `(int	ft_isprint(int c))` checks for any printable character including space.

* > [ft_strlen](/ft_strlen.c) `(size_t	ft_strlen(const char *s))` The strlen() function calculates the length of the string pointed to by s, excluding the terminating null byte ('\0').

* > [ft_memset](/ft_memset.c) `(void	*ft_memset(void *b, int c, size_t len))` The memset() function fills the first n bytes of the memory area pointed to by s with the constant byte c.

* > [ft_bzero](/ft_bzero.c) `(void	ft_bzero(void *s, size_t n))` The  bzero()  function  erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeroes (bytes containing '\0') to that area.

* > [ft_memcpy](/ft_memcpy.c) ` (void	*ft_memcpy(void *dest, const void *src, size_t n))` The  memcpy()  function copies n bytes from memory area src to memory area dest.  The memory areas must not overlap.  Use memmove if the memory
       areas do overlap.
* > [ft_memmove](/ft_memmove.c) `(void	*ft_memmove(void *dst, const void *src, size_t len))` The  memmove()  function copies n bytes from memory area src to memory area dest.  The memory areas may overlap: copying takes place as though the bytes in src are first copied into a temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array  to
       dest.
* > [ft_strlcpy](/ft_strlcpy.c) `(size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize))` The strlcpy() function copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.

* > [ft_strlcat](/ft_strlcat.c) `(size_t	ft_strlcat(char *dst, const char *src, size_t dstsize))` The strlcat() function appends the NUL-terminated string src to the end of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-terminat‐
     ing the result..
* > [ft_toupper](/ft_toupper.c) `(int	ft_toupper(int c))` If  c  is a lowercase letter, toupper() returns its uppercase equivalent, if an uppercase representation exists in the current locale.  Otherwise,
       it returns c.

* > [ft_tolower](/ft_tolower.c) `(int	ft_tolower(int c))` If c is an uppercase letter, tolower() returns its lowercase equivalent, if a lowercase representation exists in the current  locale.   Otherwise,
       it returns c.
       
* > [ft_strchr](/ft_strchr.c) `(char	*ft_strchr(const char *s, int c))` The strchr() function returns a pointer to the first occurrence of the character c in the string s.
  
* > [ft_strrchr](/ft_strrchr.c) `(char	*ft_strrchr(const char *s, int c))` The strrchr() function returns a pointer to the last occurrence of the character c in the string s.

* > [ft_strncmp](/ft_strncmp.c) `(int	ft_strncmp(const char *s1, const char *s2, size_t n))`  The ft_strncmp() function compares the two strings s1 and s2.  It returns an integer less than, equal to, or greater than zero if s1 is found, it compares only the first (at most) n bytes of s1 and s2.

* > [ft_memchr](/ft_memchr.c) `(void	*ft_memchr(const void *s, int c, size_t n))`  The  memchr() function scans the initial n bytes of the memory area pointed to by s for the first instance of c.  Both c and the bytes of the memory area pointed to by s are interpreted as unsigned char.

* > [ft_memcmp](/ft_memcmp.c) `(void	*ft_memcpy(void *dest, const void *src, size_t n))` The  memchr() function scans the initial n bytes of the memory area pointed to by s for the first instance of c.  Both c and the bytes of the memory area pointed to by s are interpreted as unsigned char.

* > [ft_strnstr](/ft_strnstr.c) `(char	*ft_strnstr(const char *haystack, const char *needle, size_t len))` The strnstr() function locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched.  Characters that appear after a ‘\0’ character are not searched.

* > [ft_atoi](/ft_atoi.c) `(int	ft_atoi(const char *str))` The atoi() function converts the initial portion of the string pointed to by nptr to int.  The behavior is the same as strtol(nptr, NULL, 10); except that atoi() does not detect errors.

* > [ft_calloc](/ft_calloc.c) `(void	*ft_calloc(size_t count, size_t size))` The  calloc() function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory. The memory is set to zero.  If nmemb or size is 0, then  calloc() returns either NULL, or a unique pointer value that can later be successfully passed to free().

* > [ft_strdup](/ft_strdup.c) `(char	*ft_strdup(const char *s1))` The  strdup()  function  returns  a pointer to a new string which is a duplicate of the string s.  Memory for the new string is obtained with malloc, and can be freed with free.

---
### Part 2 - Additional Functions

* > [ft_substr](/ft_substr.c) `(char      *ft_substr(char const *s, unsigned int start, size_t len))` Allocates (with malloc) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.

* > [ft_strjoin](/ft_strjoin.c) `(char *ft_strjoin(char const *s1, char const *s2)` Allocates (with malloc) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.

* > [ft_strtrim](/ft_strtrim.c) `(char *ft_strtrim(char const *s1, char const *set)` Allocates (with malloc) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.

* > [ft_split](/ft_split.c) `(char **ft_split(char const *s, char c))` Allocates (with malloc) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must be ended by a NULL pointer.

* > [ft_itoa](/ft_itoa.c) `(char *ft_itoa(int n))` Allocates (with malloc) and returns a string representing the integer received as an argument. Negative numbers must be handled.

* > [ft_strmapi](/ft_strmapi.c) `(char *ft_strmapi(char const *s, char (*f)(unsigned int,char)))` Applies the function ’f’ to each character of the string ’s’ to create a new string (with malloc) resulting from successive applications of ’f’.

* > [ft_striteri](/ft_striteri.c) `(void ft_striteri(char *s, void (*f)(unsigned int, char*)))` Applies the function f to each character of the string passed as argument, and passing its index as first argument. Each character is passed by address to f to be modified if necessary.

* > [ft_putchar_fd](/ft_putchar_fd.c) `(void ft_putchar_fd(char c, int fd)` Outputs the character ’c’ to the given file descriptor.

* > [ft_putstr_fd](/ft_putstr_fd.c) `(void ft_putstr_fd(char *s, int fd))` Outputs the string ’s’ to the given file descriptor.

* > [ft_putendl_fd](/ft_putendl_fd.c) `(void ft_putendl_fd(char *s, int fd))` Outputs the string ’s’ to the given file descriptor, followed by a newline.

* > [ft_putnbr_fd](/ft_putnbr_fd.c) `(void ft_putnbr_fd(int n, int fd))` Outputs the integer ’n’ to the given file descriptor.

---
### Bonus part

* > [ft_lstnew](/ft_lstnew.c) `(void ft_putstr_fd(char *s, int fd)` Allocates (with malloc) and returns a new element. The variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL.

* > [ft_lstadd_front](/ft_lstadd_front.c) `(void ft_lstadd_front(t_list **lst, t_list *new)` Adds the element ’new’ at the beginning of the list.

* > [ft_lstsize](/ft_lstsize.c) `(int ft_lstsize(t_list *lst))` Counts the number of elements in a list.

* > [ft_lstadd_back](/ft_lstadd_back.c) `(void ft_lstadd_back(t_list **lst, t_list *new)` Returns the last element of the list.

* > [ft_lstdelone](/ft_lstdelone.c) `(void ft_lstdelone(t_list *lst, void (*del)(void*))` Takes as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element. The memory of ’next’ must not be freed.

* > [ft_lstclear](/ft_lstclear.c) `(void ft_lstclear(t_list **lst, void (*del)(void *)))` Deletes and frees the given element and every successor of that element, using the function ’del’ and free. Finally, the pointer to the list must be set to NULL.

* > [ft_lstiter](/ft_lstiter.c) `(void ft_lstiter(t_list *lst, void (*f)(void *)))` Iterates the list ’lst’ and applies the function ’f’ to the content of each element.

* > [ft_lstmap](/ft_lstmap.c) `(t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *)))` Iterates the list ’lst’ and applies the function ’f’ to the content of each element. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of an element if needed.

### Extra Functions

* > [get_next_line](/get_next_line/get_next_line.c) `(char	*get_next_line(int fd))` Calling  get_next_line in a loop will allow you to read the text
available on the file descriptor one line at a time until the end of it.

* > [ft_strtjoin](/ft_strtjoin.c) `(char	*ft_strtjoin(char *string0, char *string1, char *string2))` Allocates (with malloc) and returns a new string, which is the result of the concatenation of ’string0’, ’string1’ and ’strin2’.

* > [ft_strcmp](/ft_strcmp.c) `(int       ft_strcmp(const char *s1, const char *s2))` Compares the two strings s1 and s2. The locale is not taken into account.
The comparison is done using unsigned characters.

* Aditional information - [Linux Programmer's Manual](http://man7.org/) 
