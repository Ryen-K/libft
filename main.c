#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
/* Part 1: */
// ft_isalpha()
	printf("/* ***** ft_isalpha ***** */\n");
	printf("\n");
	printf("for '1' expected 0 -> %d \n", ft_isalpha('1'));
	printf("for 'a' expected 1 -> %d \n", ft_isalpha('a'));
	printf("for 6 expected 0 -> %d \n", ft_isalpha(6));
	printf("for 120  expected 1 -> %d \n", ft_isalpha(120));
	printf("for '/' expected 0 -> %d \n", ft_isalpha('/'));
	printf("for 666 expected 0 -> %d \n", ft_isalpha(666));
	printf("for -6 expected 0 -> %d \n", ft_isalpha(-6));
// ft_isdigit()
    printf("/* ***** ft_isdigit ***** */\n");
    printf("\n");
	printf("'1'-> %d\n", ft_isdigit('1'));
	printf("1 -> %d\n", ft_isdigit(1));
// ft_isalmum()
    printf("/* ***** ft_isalnum ***** */\n");
    printf("\n");
	printf("-1 -> %d\n", ft_isalnum(-1));
	printf("1 -> %d\n", ft_isalnum(1));
	printf("120 -> %d\n", ft_isalnum(120));
	printf("660 -> %d\n", ft_isalnum(660));
	printf("'/' -> %d\n", ft_isalnum('/'));
// ft_isascii
    printf("/* ***** ft_isascii ***** */\n");
    printf("\n");
	printf("-1 -> %d\n", ft_isascii(-1));
	printf("1 -> %d\n", ft_isascii(1));
	printf("120 -> %d\n", ft_isascii(120));
	printf("660 -> %d\n", ft_isascii(660));
	printf("'/' -> %d\n", ft_isascii('/'));
// ft_isprint
    printf("/* ***** ft_isprint ***** */\n");
    printf("\n");
	printf("-1 -> %d (expected 0)\n", ft_isprint(-1));
	printf("31 -> %d (expected 0)\n", ft_isprint(31));
	printf("100 -> %d (expected 1)\n", ft_isprint(100));
	printf("127 -> %d (expected 0)\n", ft_isprint(127));
	printf("128 -> %d (expected 0)\n", ft_isprint(128));
// ft_strlen
    printf("/* ***** ft_strlen ***** */\n");
    printf("\n");
	printf("%lu \n",ft_strlen(""));
	printf("%lu \n",ft_strlen("driss"));
	printf("%lu \n",ft_strlen("six-cent-soixante-six"));
	printf("%lu \n",ft_strlen("j'suis a court d'idees"));
// ft_memset
    printf("/* ***** ft_memset ***** */\n");
    printf("\n");
	char	buffer1[10];
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	printf("before:\n");
	while (i < 10)
	{
		printf("%zu: %c\n", i, buffer1[i]);
		i++;
	}
	ft_memset(buffer1, 'a', sizeof(char) * 5);
	ft_memset(buffer1+5, 'b', sizeof(char));
	ft_memset(buffer1+6, 'c', sizeof(char) * 4);	
	printf("after:\n");
	    while (j < 10)
    {
        printf("%zu: %c\n", j, buffer1[j]);
        j++;
    }
// ft_bzero
    printf("/* ***** ft_bzero ***** */\n");
    printf("\n");
	char	buffer[] = "test";

	i = 0;
	j = 0;
	printf("before:\n");
	while (buffer[i])
	{
		printf("%zu: %c\n", i, buffer[i]);
		i++;
	}
	ft_bzero(buffer+2, sizeof(char) * 2);
	printf("after:\n");
	    while (buffer[j])
    {
        printf("%zu: %c\n", j, buffer[j]);
        j++;
    }
// ft_memcpy
    printf("/* ***** ft_memcpy ***** */\n");
    printf("\n");
	char test1[] = "ABCDE";
	char test2[] = "12345";
	char test3[] = "HELLO";

	printf("Test 1 : %s (expected: 12345)\n",
		(char *)ft_memcpy(test1, "12345", 6));
	printf("Test 2 : %s (expected: undefined)\n",
		(char *)ft_memcpy(test2 + 1, test2, 3));
	printf("Test 3 : %s (expected: HELLO)\n",
		(char *)ft_memcpy(test3, "WORLD", 0));
// ft_memmove
    printf("/* ***** ft_memmove ***** */\n");
    printf("\n");
	char a[] = "12345";
	char b[] = "ABCDE";

	printf("Test 1 : %s\n", (char *)ft_memmove(b, a, 5));
	char c1[] = "12345";
	printf("Test 2 : %s\n", (char *)ft_memmove(c1 + 1, c1, 3));
	char d[] = "ABCDE";
	printf("Test 3 : %s\n", (char *)ft_memmove(d, d + 2, 3));
	char e[] = "HELLO";
	printf("Test 4 : %s\n", (char *)ft_memmove(e, "WORLD", 0));

// ft_strlcpy
    printf("/* ***** ft_strlcpy ***** */\n");
    printf("\n");
	char	src[] = "bonjour";
	char	dest1[10];
	char	dest2[4];
	size_t	ret;

	ret = ft_strlcpy(dest1, src, sizeof(dest1));
	printf("src= '%s' \n", src);
	printf("dest1= '%s' \n", dest1);
	printf("ret= %zu & len of src= %zu \n", ret, ft_strlen(src));

	ret = ft_strlcpy(dest2, src, sizeof(dest2));
	printf("src= '%s' \n", src);
	printf("dest2= '%s' \n", dest2);
	printf("ret= %zu & len of src= %zu \n", ret, ft_strlen(src));

	ret = ft_strlcpy(dest1, src, 0);
	printf("src= '%s' \n", src);
	printf("dest2= '%s' \n", dest1);
	printf("ret= %zu & len of src= %zu \n", ret, ft_strlen(src));

// ft_strlcat
	printf("/* ***** ft_strlcat ***** */\n");
    printf("\n");
	char dst1b[100] = "1234";
	char dst1a[100] = "1234";
	char src1[100] = "ABCD";
	char dst2[100] = "1234";
	char src2[100] = "ABCD";

	printf("// dst = %s\n", dst1a);
	printf("// src = %s\n", src1);
        printf("size = 7, result = %zu, expected 8\n", 
		ft_strlcat(dst1a, src1, 7));
	printf("size = 7, result = %zu, expected 8\n", 
		strlcat(dst1b, src1, 7));
        printf("// dst = %s\n", dst1b);
        printf("// src = %s\n", src1);
        printf("size = 2, result = %zu, expected 6\n", 
		ft_strlcat(dst2, src2, 2));
	printf("size = 2, result = %zu, expected 6\n", 
		strlcat(dst2, src2, 2));
        printf("// dst = %s\n", dst2);
        printf("// src = %s\n", src2);
        return (0);

// ft_toupper
    printf("/* ***** ft_toupper ***** */\n");
    printf("\n");
	printf("'a' -> %c\n", ft_toupper('a'));
	printf("' ' -> %c\n", ft_toupper(' '));
	printf("'' -> %c\n", ft_toupper(0));
// ft_tolower
    printf("/* ***** ft_tolower ***** */\n");
    printf("\n");
	printf("'A' -> %c\n", ft_tolower('A'));
	printf("' ' -> %c\n", ft_tolower(' '));
	printf("'' -> %c\n", ft_tolower(0));
// ft_strchr
    printf("/* ***** ft_strchr ***** */\n");
    printf("\n");
	char	*str;
	char	ch;
	char	*res;

	str = "hello";
	ch = 'l';
	res = ft_strchr(str, ch);
	printf("first occ of %c is %s\n", ch, res);
// ft_strrchr
    printf("/* ***** ft_strrchr ***** */\n");
    printf("\n");

	str = "abcdefghijklmnopqrstuvwxyz";
	ch = 'l';

	res = ft_strrchr(str, ch);
	printf("last occ of '%c':  %s\n", ch, res);

// ft_strncmp
    printf("/* ***** ft_strncmp ***** */\n");
    printf("\n");

	printf("result = %d (exp 0) \n", ft_strncmp("hello1", "hello2", 3));
	printf("result = %d (exp pos)\n", ft_strncmp("hello7", "hello2", 6));
	printf("result = %d (exp neg)\n", ft_strncmp("hello1", "hello2", 12));
	printf("result = %d (exp 0) \n", ft_strncmp("hello", "hello", 5));

// ft_memchr
    printf("/* ***** ft_memchr ***** */\n");
    printf("\n");

	str = "hello";
	ch = 'z';

	res = ft_memchr(str, ch, 5);
	if (res)
		printf("first occ of %c is %s\n", ch, res);
	else
		printf("%c not found in %s \n", ch, str);
// ft_memcmp
    printf("/* ***** ft_memcmp ***** */\n");
    printf("\n");
	printf("result = %d (exp 0) \n", ft_memcmp("hello1", "hello2", 3));
	printf("result = %d (exp pos)\n", ft_memcmp("hello7", "hello2", 6));
	printf("result = %d (exp neg)\n", ft_memcmp("hello1", "hello2", 12));
	printf("result = %d (exp 0) \n", ft_memcmp("hello", "hello", 5));

// ft_strnstr
    printf("/* ***** ft_strnstr ***** */\n");
    printf("\n");
	char	test_str[] = "this is an example";

	printf("%s", ft_strnstr(test_str, "example", 12));
    printf("\n");
// ft_atoi
    printf("/* ***** ft_atoi ***** */\n");
    printf("\n");
	printf("%d\n", ft_atoi(" ---+--+1234ab567"));
	printf("%d\n", ft_atoi(" +1234ab567"));
	printf("%d\n", ft_atoi(" -1234ab567"));
	printf("%d\n", ft_atoi(" +i1234ab567"));
	printf("%d\n", ft_atoi(" 123456789"));
    printf("\n");
// ft_calloc
    printf("/* ***** ft_calloc ***** */\n");
    printf("\n");
	int	*t1 = ft_calloc(5, sizeof(int));
	char	*t2 = ft_calloc(10, sizeof(char));
	double	*t3 = ft_calloc(3, sizeof(double));
	void	*t4 = ft_calloc(0, sizeof(int));
	i = 0;
	printf("t1 (5 * int):\n");
	while (i < 5)
	{
		printf("%d \n", t1[i]);
		i++;
	}
	i = 0;
	printf("t2 (10 * char):\n");
	while (i < 10)
	{
		printf("%d \n", t2[i]);
		i++;
	}
	printf("t3 (3 * double):\n");
	i = 0;
	while (i < 3)
	{
		printf("%.1f \n", t3[i]);
		i++;
	}
	printf("t4 (0 * int): %p\n", t4);
	free(t1);
	free(t2);
	free(t3);
	free(t4);
    printf("\n");
// ft_strdup
    printf("/* ***** ft_strdup ***** */\n");
    printf("\n");
	printf("result: %s \n", ft_strdup("I am a dupplicate :)"));
    printf("\n");
/* Part 2: */

// ft_substr
    printf("/* ***** ft_substr ***** */\n");
    printf("\n");
	printf("result: %s\n", ft_substr("this is a test", 10, 4));
	printf("result: %s\n", ft_substr("this is a test", 13, 4));
	printf("result: %s\n", ft_substr("this is a test", 15, 4)); 
	printf("result: %s\n", ft_substr("this is a test", 2, 15));
    printf("\n");
// ft_strjoin
    printf("/* ***** ft_strjoin ***** */\n");
    printf("\n");
	printf("%s \n", ft_strjoin("foo ", "bar"));
    printf("\n");
// ft_strtrim
    printf("/* ***** ft_strtrim ***** */\n");
    printf("\n");
	printf("%s\n", ft_strtrim("--+this is a test*-", "-*+"));
	printf("%s\n", ft_strtrim("", "Z"));
	printf("%s\n", ft_strtrim("--+this is a test*-", ""));
	printf("%s\n", ft_strtrim("this is a test", "t"));
    printf("\n");
// ft_split
    printf("/* ***** ft_split ***** */\n");
	//
    printf("\n");
// ft_itoa
    printf("/* ***** ft_itoa ***** */\n");
    printf("\n");
	printf("%s \n", ft_itoa(-2147483648));
	printf("%s \n", ft_itoa(-1));
	printf("%s \n", ft_itoa(0));
	printf("%s \n", ft_itoa(1));
	printf("%s \n", ft_itoa(2147483647));
    printf("\n");
// ft_strmapi
    printf("/* ***** ft_strmapi ***** */\n");
	//
    printf("\n");
// ft_striteri
    printf("/* ***** ft_striteri ***** */\n");
	//
    printf("\n");
// ft_putchar_fd
    printf("/* ***** ft_putchar_fd ***** */\n");
    printf("\n");
	char    character;

	character = 'd';
	ft_putchar_fd(character, 1);
	ft_putchar_fd('\n', 1);
    printf("\n");
// ft_putstr_fd
    printf("/* ***** ft_putstr_fd ***** */\n");
    printf("\n");
	ft_putstr_fd("this is a test", 1);
    printf("\n");
// ft_putendl_fd
    printf("/* ***** ft_putendl_fd ***** */\n");

	ft_putendl_fd("this is another test", 1);
// ft_putnbr_fd
    printf("/* ***** ft_putnbr_fd ***** */\n");
    printf("\n");
	ft_putnbr_fd(25, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-25, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-2147483648, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(2147483647, 1);
	ft_putchar_fd('\n', 1);
    printf("\n");
// end of libft
    printf("/* ***** end of libft ***** */\n\n");

	return (0);
}
