
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char    str_a[] = "ABCD";
        char    str_b[] = "ABCE";
        char    str_c[] = "ABC";
        char    str_d[] = "ABC";

        if (ft_strncmp(str_a, str_b, 3) == 0)
                printf("Equal");
        else if(ft_strncmp(str_a, str_b, 3) > 0)
                printf("s1 is bigger");
        else if(ft_strncmp(str_a, str_b, 3) < 0)
                printf("s2 is bigger");

        printf("\n");

        if (ft_strncmp(str_c, str_d, 5) == 0)
                printf("Equal");
        else if(ft_strncmp(str_c, str_d, 5) > 0)
                printf("s1 is bigger");
        else if(ft_strncmp(str_c, str_d, 5) < 0)
                printf("s2 is bigger");

        printf("\n");

        if (ft_strncmp(str_a, str_c, 10) == 0)
                printf("Equal");
	else if(ft_strncmp(str_a, str_c, 10) > 0)
		printf("s1 is bigger");
	else if(ft_strncmp(str_a, str_c, 10) < 0)
                printf("s2 is bigger");

        printf("\n");
}
