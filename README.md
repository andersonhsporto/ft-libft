# Libft
---
### Part 1 - Libc functions

* > [ft_isalpha](/ft_isalpha.c) `(int	ft_isalpha(int c))` checks  for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)).

* > [ft_isdigit](/ft_isdigit.c) `(int	ft_idigit(int c))` checks for a digit (0 through 9).

* > [ft_isalnum](/ft_isalnum.c) `(int	ft_isalnum(int c))` checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)).

* > [ft_isascii](/ft_isascii.c) `(int	ft_isascii(int c))` checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.

* > [ft_isprint](/ft_isprint.c) `(int	ft_isprint(int c))` checks for any printable character including space.

* > [ft_strlen](/ft_strlen.c) `(size_t	ft_strlen(const char *s))` The strlen() function calculates the length of the string pointed to by s, excluding the terminating null byte ('\0').

* > [ft_memset](/ft_memset.c) `(void	*ft_memset(void *b, int c, size_t len))` The memset() function fills the first n bytes of the memory area pointed to by s with the constant byte c.

* > [ft_bzero](/ft_bzero.c) `(void	ft_bzero(void *s, size_t n))` The  bzero()  function  erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeroes (bytes containing
       '\0') to that area.
* > [ft_memcpy](/ft_memcpy.c) ` (void	*ft_memcpy(void *dest, const void *src, size_t n))` The  memcpy()  function copies n bytes from memory area src to memory area dest.  The memory areas must not overlap.  Use memmove(3) if the memory
       areas do overlap.
* > [ft_memmove](/ft_memmove.c) `(void	*ft_memmove(void *dst, const void *src, size_t len))` The  memmove()  function copies n bytes from memory area src to memory area dest.  The memory areas may overlap: copying takes place as though the
       bytes in src are first copied into a temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array  to
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
