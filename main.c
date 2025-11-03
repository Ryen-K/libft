#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
/* Part 1: */
// ft_isalpha()
        printf("for '1' expected 0 -> %d \n", ft_isalpha('1'));
        printf("for 'a' expected 1 -> %d \n", ft_isalpha('a'));
        printf("for 6 expected 0 -> %d \n", ft_isalpha(6));
        printf("for 120  expected 1 -> %d \n", ft_isalpha(120));
        printf("for '/' expected 0 -> %d \n", ft_isalpha('/'));
        printf("for 666 expected 0 -> %d \n", ft_isalpha(666));
        printf("for -6 expected 0 -> %d \n", ft_isalpha(-6));
// ft_isdigit()
        printf("'1'-> %d\n", ft_isdigit('1'));
        printf("1 -> %d\n", ft_isdigit(1));
// ft_isalmum()
	printf("-1 -> %d\n", ft_isalnum(-1));
	printf("1 -> %d\n", ft_isalnum(1));
	printf("120 -> %d\n", ft_isalnum(120));
	printf("660 -> %d\n", ft_isalnum(660));
	printf("'/' -> %d\n", ft_isalnum('/'));
// ft_isascii
	printf("-1 -> %d\n", ft_isascii(-1));
    printf("1 -> %d\n", ft_isascii(1));
    printf("120 -> %d\n", ft_isascii(120));
    printf("660 -> %d\n", ft_isascii(660));
    printf("'/' -> %d\n", ft_isascii('/'));
// ft_isprint
	printf("-1 -> %d (expected 0)\n", ft_isprint(-1));
    printf("31 -> %d (expected 0)\n", ft_isprint(31));
    printf("100 -> %d (expected 1)\n", ft_isprint(100));
    printf("127 -> %d (expected 0)\n", ft_isprint(127));
    printf("128 -> %d (expected 0)\n", ft_isprint(128));
// ft_strlen
	printf("%lu \n",ft_strlen(""));
    printf("%lu \n",ft_strlen("driss"));
    printf("%lu \n",ft_strlen("six-cent-soixante-six"));
    printf("%lu \n",ft_strlen("j'suis a court d'idees"));

// ft_memset
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
	char a[] = "12345";
	char b[] = "ABCDE";

	printf("Test 1 : %s\n", (char *)ft_memmove(b, a, 5));
	char c[] = "12345";
	printf("Test 2 : %s\n", (char *)ft_memmove(c + 1, c, 3));
	char d[] = "ABCDE";
	printf("Test 3 : %s\n", (char *)ft_memmove(d, d + 2, 3));
	char e[] = "HELLO";
	printf("Test 4 : %s\n", (char *)ft_memmove(e, "WORLD", 0));

// ft_strlcpy
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
	printf("'a' -> %c\n", ft_toupper('a'));
	printf("' ' -> %c\n", ft_toupper(' '));
	printf("'' -> %c\n", ft_toupper(0));
// ft_tolower
	printf("'A' -> %c\n", ft_toupper('a'));
	printf("' ' -> %c\n", ft_toupper(' '));
	printf("'' -> %c\n", ft_toupper(0));
// ft_strchr
	char	*str;
	char	ch;
	char	*res;

	str = "hello";
	ch = 'l';
	res = ft_strchr(str, ch);
	printf("first occ of %c is %s\n", ch, res);
// ft_strrchr
        *str = "abcdefghijklmnopqrstuvwxyz";
        ch = 'l';

        res = ft_strrchr(str, ch);
        printf("last occ of '%c':  %s\n", ch, res);

// ft_strncmp
	printf("result = %d (exp 0) \n", ft_strncmp("hello1", "hello2", 3));
	printf("result = %d (exp pos)\n", ft_strncmp("hello7", "hello2", 6));
	printf("result = %d (exp neg)\n", ft_strncmp("hello1", "hello2", 12));
	printf("result = %d (exp 0) \n", ft_strncmp("hello", "hello", 5));

// ft_memchr
        str = "hello";
        ch = 'z';
        char    *res;

        res = ft_memchr(str, ch, 5);
	if (res)
		printf("first occ of %c is %s\n", ch, res);
        else
		printf("%c not found in %s \n", ch, str);
// ft_memcmp
        printf("result = %d (exp 0) \n", ft_memcmp("hello1", "hello2", 3));
        printf("result = %d (exp pos)\n", ft_memcmp("hello7", "hello2", 6));
        printf("result = %d (exp neg)\n", ft_memcmp("hello1", "hello2", 12));
        printf("result = %d (exp 0) \n", ft_memcmp("hello", "hello", 5));

// ft_strnstr
	char	test_str[] = "this is an example";

	printf("%s", ft_strnstr(test_str, "example", 12));

// ft_atoi
	printf("%d\n", ft_atoi(" ---+--+1234ab567"));
	printf("%d\n", ft_atoi(" +1234ab567"));
	printf("%d\n", ft_atoi(" -1234ab567"));
	printf("%d\n", ft_atoi(" +i1234ab567"));
	printf("%d\n", ft_atoi(" 123456789"));

// ft_calloc
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

// ft_strdup
	printf("result: %s \n", ft_strdup("I am a dupplicate :)"));

/* Part 2: */



// end

return (0);
}
