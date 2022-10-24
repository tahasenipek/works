#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void    ft_putmaps(char **line_cacher)
{
    char    *line;
    int        i;
    char    *temp;

    i = 0;
    temp = malloc(sizeof(char *) * 1);
    line = malloc(sizeof(char *) * 1);
    printf("5\n");
    line_cacher = malloc(sizeof(char *) * 2 + 1);
    line_cacher[2] = NULL;
    line = "1111111111111";
    printf(" line first char == %s\n",line);
    while (line != NULL)
    {
        printf("7\n");
        temp = line;
        line_cacher[i++] = line;
        free(line);
        printf("%s",line_cacher[0]);
        line = "22222222222222";
    }
    printf("ÇIKTIM\n");
}

int main()
{
	char **line_cacher;
	
    line_cacher = malloc(sizeof(char *) * 2 + 1);
    ft_putmaps(line_cacher);
}
