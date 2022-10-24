#include <stdio.h>
#include <string.h>

char *strrev (char *string)
{
  int c;
  int i;
  
  while(string != 0)
  {
    i++;
    string++;
  }
  c = 0;
  char str[i + 1];
  while(i != 0)
  {
      str[c] = string[i];
	  i--;
	  c++;
  }
  str[c + 1] = 0;
  
  return(str);
}

int main()
{
	char *str = "taha";

	printf("%s", strrev(str));
}
