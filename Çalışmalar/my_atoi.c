int string_to_number(const char *src) {

  int i = 0;
    int a;
    int c = 0;
    char *string;
    src = string;
  
  if (src[i] <= 47 || src[i] >= 58)
    i++;
  while(string[i])
    {
     c = src[i] - 48;
    a = c;
    i++;
  }
  return(a);
}

#include <stdio.h>
int main()
{
    char *a = "123";
    
    printf("%d", string_to_number(a));
}
